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
#define rii(i,j) scanf("%i %i",&i,&j)
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
#define p_arr(A,a,b) FOR(i,a,b){ cout << A[i] << " ";} cout << endl; 

int A1,A2;
int K1,K2;
int n;

int min_k,max_k;
int min_a,max_a;

int mini,maxi;

int mini_1[1000];
int mini_2[1000];

int maxi_1[1000];
int maxi_2[1000];

int main(){

    ri(A1);
    ri(A2);
    ri(K1);
    ri(K2);
    ri(n);

    if(K1>K2){
        max_k = K1;
        max_a = A1;
        min_k = K2;
        min_a = A2;
    }
    else{
        max_k = K2;
        max_a = A2;
        min_k = K1;
        min_a = A1;
    }

    //compute max:
    int temp_n = n;
    int temp_maxi = n/min_k;

    if(temp_maxi > min_a){
        temp_maxi = min_a;
        temp_n -= min_a*min_k;

        temp_maxi += temp_n/max_k;
    }
    maxi = temp_maxi;

    //compute mini:
    temp_n = n;
    if((min_k-1)*min_a + (max_k-1)*max_a >= n){
        mini = 0;
    }
    else{
        mini = n - ((min_k-1)*min_a + (max_k-1)*max_a);
    }

    printf("%d %d\n",mini,maxi);

    return 0;
}

 
