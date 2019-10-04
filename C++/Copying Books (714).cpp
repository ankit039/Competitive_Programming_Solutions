//714 Copying Books
#include<bits/stdc++.h>

using namespace std;

bool isValid(long long possibleMin,vector<long long> pages,long long n,long long k){

    long long sum=0,count=0;
    for(long long i=0;i<n;i++){
        if((sum+pages[i])<=possibleMin){
            sum+=pages[i];
        }
        else{
            i--;
            sum=0;
            count++;
        }
    }
    count++;
    if(count<=k){
        return true;
    }

    return false;
}

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        vector<long long> pages(n);
        long long maxP=0,minP=0;

        for(long long i=0;i<n;i++){
            cin>>pages[i];
            maxP+=pages[i];
            if(minP<pages[i]){
                minP=pages[i];
            }
            //minP=max(minP,pages[i]);
        }
        

        long long possibleMin;
        while(minP<=maxP){
            long long mid=(minP+maxP)/2;
            //cout<<minP<<" "<<maxP<<" "<<possibleMin<<"\n";

            if(isValid(mid,pages,n,k)){
                possibleMin=mid;
                maxP=mid-1;
            }
            else{
                minP=mid+1;
            }
        }

        //To Format the Output
        long long sum=pages[n-1],l;
        vector<long long> config;
        config.push_back(pages[n-1]);

        for(int i=n-2;i>=0;i--){
            if((sum+pages[i])<=possibleMin){
                if(k-1==i+1){
                    l=i;
                    config.push_back(-1);
                    break;
                }
                config.push_back(pages[i]);
                sum+=pages[i];
            }
            else{
                k--;
                sum=0;
                config.push_back(-1);
                if(k==i+1){
                    l=i;
                    break;
                }
                i++;
            }

            if(i==0){
                k--;
                l=-1;
                config.push_back(-1);
            }
        }

        for(int i=l;i>=0;i--){
            config.push_back(pages[i]);
            config.push_back(-1);
        }

        for(int i=config.size()-2;i>=0;i--){
            if(config[i]!=-1){
                cout<<config[i];
                if(i!=0){
                    cout<<" ";
                }
            }
            else{
                cout<<"/ ";
            }
        }

        cout<<"\n";
    }

    return 0;
}
