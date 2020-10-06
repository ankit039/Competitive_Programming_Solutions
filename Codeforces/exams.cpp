//https://codeforces.com/problemset/problem/479/C
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef pair<unsigned int, unsigned int> puu;
typedef priority_queue<pair<unsigned int, unsigned int>> pq ;

#define ri(i) scanf("%d",&i)
#define rl(i) scanf("%ld",&i)
#define rii(i,j) scanf("%u %u",&i,&j)
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
#define p_arr(A,a,b) FOR(i,a,b){ cout << A[i] << " ";} cout << endl; 



int N;
puu A[5001];

int t1,t2;
pq p;

bool puu_comp(puu p1,puu p2){
    return p1.first!=p2.first ? p1.first < p2.first : p1.second < p2.second;
}


int exams(int i = N-1){
    if(i==0){
        return A[i].second;
    }
    if(exams(i-1)<=A[i].second) {return A[i].second;}
    else {return A[i].first;}
}


int main(){

    ri(N);

    FOR(i,1,N){
        rii(t1,t2);
        p.push({t1,t2});
    }

    ROF(i,N-1,0){
        A[i] = {p.top().first,p.top().second};
        p.pop();
    }

    cout << exams() << endl;

  

    return 0;
}
