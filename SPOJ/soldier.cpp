#include <iostream>
#include <vector>
using namespace std;
 
int N,T;
int price[110];
int quality[110];  
vector<int> equipment[7];
int t,p,q;
int code[7] = {-1, 2,3,5,7,11,13};
int ans;
int availableTypes = 1;
int counter;
int memo[7][1010];
int soldierv2(int i = 6, int money = T){
    counter ++;
 
    int ans = -1;
    int temp1;
    if(money <= 0){
        return -1;
    }
    if(i==1){
        for(int j = 0; j < equipment[i].size(); j++){
            ans = money - price[equipment[i].at(j)] >= 0 ? max(ans,quality[equipment[i].at(j)]) : ans;
        }
        return ans;
    }
 
    for(int j = 0; j < equipment[i].size(); j++){
 
 
        if(memo[i-1][money - price[equipment[i].at(j)]]==0){
            temp1 = soldierv2(i-1,money - price[equipment[i].at(j)]);
            memo[i-1][money - price[equipment[i].at(j)]] = temp1;
        }
        else{
            temp1 = memo[i-1][money - price[equipment[i].at(j)]];
        }
        temp1 = min(quality[equipment[i].at(j)],temp1);
        ans = temp1 != -1? max(temp1,ans) : ans;
    }
 
    return ans;
}
 
 
int main(){
    for(int i = 1; i <= 6; i++ ){
        equipment[i].reserve(1000);
    }
 
    scanf("%d %d", &N, &T);
 
    for(int i = 1; i <= N; i++){
        scanf("%d %d %d", &t, &p, &q);
 
        if(t<=6){
            price[i] = p;
            quality[i] = q;
            equipment[t].push_back(i);
            if(availableTypes%code[t]!=0){
                availableTypes *= code[t];
            }
        }
    }
 
    if(availableTypes!=30030){
        cout << 0 << endl;
    }
    else{
        ans = soldierv2();
        if(ans==-1){
            cout << 0 << endl;
        }
        else{
            cout << ans << endl;
 
        }
 
    }
    
    return 0;
} 
