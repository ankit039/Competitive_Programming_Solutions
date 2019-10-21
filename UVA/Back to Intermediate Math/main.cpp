#include<bits/stdc++.h>

#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
#define print(x) cout<<x<<"\n"
#define For(i,x,y) for(i = x; i < y; i++)
typedef std::vector<int> vi;
typedef std::vector<std::vector<int>> vvi;
typedef long long ll;
int INF = INT32_MIN;
using namespace std;

void fast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


int main() {
//    fast();
    long q;
    cin>>q;
    int t = 1;
    while(q--){
        float d,u,v;
        cin>>d>>v>>u;
        if(u <= v || v == 0){
            printf("Case %i: %s\n",t,"can't determine");
        }else{
            float diff = abs ((d / u) - (d / sqrt(u * u - v * v)));\
            printf("Case %i: %.3f\n",t,diff);
        }
        t++;
    }
    return 0;
}
