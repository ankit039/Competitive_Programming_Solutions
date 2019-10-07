//10474 - Where is the Marble?
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q,t=1;

    cin>>n>>q;

    while(n!=0 || q!=0){

        vector<int> numbers(n);

        for(int i=0;i<n;i++){
            cin>>numbers[i];
        }

        sort(numbers.begin(),numbers.end());

        cout<<"CASE# "<<t<<":\n";
        while(q>0){
            int x,index=-1;
            cin>>x;
            int s=0,e=n-1;
            
            while(s<=e){
                int mid=(s+e)/2;

                if(numbers[mid]==x){
                    index=mid;
                    e=mid-1;
                }
                else if(numbers[mid]>x){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }

            if(index>-1){
                cout<<x<<" found at "<<index+1<<"\n";
            }
            else{
                cout<<x<<" not found\n";
            }
            q--;
        }
        t++;
        cin>>n>>q;
    }

    return 0;
}
