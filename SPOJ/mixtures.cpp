#include <iostream>
using namespace std;
 
int n;
int mixes[101];
int MAXINT = ~(1<<31);
int T[101];
int memo[101][101];
int counter;
int get_sum(int b, int e){
 
    if(e<b){ return 0; }
 
    int begin = max(b,0);
    int end = min(e,n-1);
 
    if(begin==0){return T[end]%100;}
 
    return (T[end] - T[begin - 1])%100;
 
}
 
 
 
 
int mixtv2(int i = 0, int j = n-1){
    //i: inicio
    //j: fin
    int mini = MAXINT;
    int temp;
    int left;
    int right;
 
    counter++;
 
    if(j==i){
        return 0;
    }
 
    if( j - i + 1 == 2){
        return mixes[i]*mixes[j];
    }
 
    for(int k = i; k < j ; k++){
        
        if(memo[i][k]==-1){
            memo[i][k] = mixtv2(i,k);
        }
        if(memo[k+1][j]==-1){
            memo[k+1][j] = mixtv2(k+1,j);
        }
 
        left = memo[i][k];
        right = memo[k+1][j];
 
        temp = left + right + get_sum(i,k)*get_sum(k+1,j);
        
 
        mini = min(mini,temp);
    }
 
    return mini;
}
 
 
 
int main(){
 
    while(scanf("%d", &n)>0){
 
        //initialize memo:
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                memo[i][j] = -1;
            }
        }
 
        for(int i = 0; i < n; i++){
            cin >> mixes[i];
            T[i] = 0;
        }
 
        T[0] = mixes[0];
        for(int i = 1; i < n; i++){
            T[i] = T[i-1] + mixes[i];
        }
 
        cout << mixtv2() << endl;
    }
 
    return 0;
} 
