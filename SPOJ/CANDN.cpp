#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;
 
int J,B,C,N,S;
int e1,e2,l;
 
int ans,ansN,ansC;
const int MAXINT = ~(1<<31);
int memo_charly[5001];
int memo_nito[5001];
int memo_bar[5001];
 
 
void dijkstra(int (&memo)[5001],int i, vector<pair<int,int>> (graph)[]){
    
    priority_queue<pair<int,int>> q;
    int temp_w,temp_node;
    pair<int,int> temp_e;
 
    memo[i] = 0;
    q.push({0,i});
 
    while(!q.empty()){
        temp_w = -q.top().first;
        temp_node = q.top().second;
 
        for(int j = 0; j < graph[temp_node].size(); j++){
            temp_e = graph[temp_node][j];
            if(temp_w + temp_e.first < memo[temp_e.second]){
                memo[temp_e.second] = temp_w + temp_e.first;
                q.push({-memo[temp_e.second],temp_e.second});
            }
        }
 
        q.pop();
    }
    
}
 
void init_memo(int (&memo)[5001]){
    for(int i = 1; i <= J; i++){
        memo[i] = MAXINT;
    }
}
 
void candn(vector<pair<int,int>> (graph)[5001]){
    //init memos:
    init_memo(memo_nito);
    init_memo(memo_charly);
    init_memo(memo_bar);
 
    //dijkstra over the three memos:
    dijkstra(memo_nito,N,graph);
    dijkstra(memo_charly,C,graph);
    dijkstra(memo_bar,B,graph);
 
    int maxi = -1;
    int maxi_node = -1;
    int min_cost_charly = memo_bar[C];
    int min_cost_nito = memo_bar[N];
 
    for(int i = 1; i <= J; i++){
        if((memo_bar[i] + memo_charly[i]) == min_cost_charly && (memo_bar[i] + memo_nito[i])==min_cost_nito && memo_bar[i]>maxi){
            maxi = memo_bar[i];
            maxi_node = i;
        }
    }
 
    ans = maxi;
    ansC = memo_charly[maxi_node];
    ansN = memo_nito[maxi_node];
 
}
 
int main(){
 
    scanf("%d %d %d %d %d",&J,&B,&C,&N,&S);
    while(J!=-1){
        vector<pair<int,int>> graph[5001];
 
        for(int i = 0; i < S; i++){
            scanf("%d %d %d",&e1,&e2,&l);
            graph[e1].push_back({l,e2});
            graph[e2].push_back({l,e1});
        }
 
        candn(graph);
 
        cout << ans << " " << ansC << " " << ansN << endl; 
 
        scanf("%d %d %d %d %d",&J,&B,&C,&N,&S);
    }
 
    return 0;
}
