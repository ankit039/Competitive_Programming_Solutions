#include <iostream>
#include <list>
#include <vector>
#include <map>
 
using namespace std;
 
struct edge {int a,b; float c;};
 
const int MAXINT = ~(1<<31);
 
int N;
int M;
int n_case = 1;
float len;
 
vector<pair<float,int>> graph[31];
list<edge> E;
map<string,int> names;
char c1[200];
char c2[200];
 
bool bellman(int start){
 
    float cost[31];
    float maxf = (float) MAXINT;
    for(int i = 0; i < N; i++){
        cost[i] = maxf;
    }
 
    cost[start] = -1.0f;
 
    for(int l = 1; l < N; l++ ){
        for(edge e:E){
 
            if(cost[e.a]==maxf &&cost[e.b]==maxf){continue;}
 
            if(cost[e.b] > cost[e.a]*e.c){
                cost[e.b] = cost[e.a]*e.c;
            }
 
        }
    }
 
    for(edge e:E){
 
        if(cost[e.a]==maxf &&cost[e.b]==maxf){continue;}
 
        if(cost[e.b] > cost[e.a]*e.c){
 
            return true; // there's infinite loop
            
        }
 
    }
    return false; //no infinite loop
 
}
 
bool arbitrag(){
 
    for(int i = 0; i < N; i++){
        if(bellman(i)){return true;}
    }
 
    return false;
}
 
 
int main(){
 
    scanf("%d",&N);
    int temp1;
    int temp2;
    while(N!=0){
 
        for( int i = 0; i < N; i++){
            cin >> c1;
            names[c1] = i;
        }
 
        scanf("%d", &M);
 
        for(int j = 0; j < M; j++){
            scanf("%s %f %s",c1,&len,c2);
            temp1 = names[c1];
            temp2 = names[c2];
 
            graph[temp1].push_back({len,temp2});
 
            E.push_back({temp1,temp2,len});
        }
 
        printf("Case %d: %s \n",n_case,arbitrag() ? "Yes" : "No");
 
 
 
        scanf("%d",&N);
        n_case++;
        names.clear();
        for(int i = 0; i < N; i++){
            graph[i].clear();
        }
        E.clear();
    }
 
    return 0;
} 
