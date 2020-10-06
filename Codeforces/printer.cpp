#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
typedef pair<unsigned int, unsigned int> puu;
typedef priority_queue<pair<unsigned int, unsigned int>> pq ;

#define ri(i) scanf("%d",&i)
#define rl(i) scanf("%ld",&i)
#define rii(i,j) scanf("%d %d",&i,&j)
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
#define p_arr(A,a,b) FOR(i,a,b){ cout << A[i] << " ";} cout << endl; 
#define MAXINT ~(1<<31)

int n,k;
string f1;
string f2;

int f1_rm;
int f2_rm;
int f1_lm;
int f2_lm;
int candidate;

int f,t;

int ans = MAXINT;

int main(){

        rii(n,k);

    cin >> f2;
    cin >> f1;

    //find both rm:

    ROF(i,n-1,0){
        if(f2[i]=='1'){
            f2_rm = i+1;
            break;
        }
    }

    ROF(i,n-1,0){
        if(f1[i]=='1'){
            f1_rm =  i+1;
            break;
        }
    }

    if(f1_rm==0 && f1[0]=='0'){
        FOR(i,0,n-1){
            if(f2[i]=='1'){
                f2_lm =  i+1;
                break;
            }            
        }
        int mp = (f2_lm+f2_rm)/2;
        printf("%d\n",max(abs(mp-f2_lm),abs(mp-f2_rm)));
        printf("%d %d\n", 2, mp);
        return 0;
    }

    if(f2_rm==0 && f2[0]=='0'){
        FOR(i,0,n-1){
            if(f1[i]=='1'){
                f1_lm =  i+1;
                break;
            }            
        }
        int mp = (f1_lm+f1_rm)/2;
        printf("%d\n",max(abs(mp-f1_lm),abs(mp-f1_rm)));
        printf("%d %d\n", 1, mp);
        return 0;
    }


    FOR(i,1,n){
        ans = min(ans,max(abs(i-f2_rm),i+k+f1_rm));
        ans = min(ans,max(abs(i-f1_rm),i+k+f2_rm));
    }

    FOR(i,1,n){
        if(ans==max(abs(i-f2_rm),i+k+f1_rm)){
            printf("%d\n",ans);
            printf("%d %d\n",2,i);
            return 0;
        }
        if(ans==max(abs(i-f1_rm),i+k+f2_rm)){
            printf("%d\n",ans);
            printf("%d %d\n",1,i);
            return 0;
        }
    }

    //cout << ans << endl;
    return 0;
}

 
