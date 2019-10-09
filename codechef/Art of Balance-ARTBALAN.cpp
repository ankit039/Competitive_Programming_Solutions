#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int t,ch,freq;
    cin >> t;
    while(t--)
    {
        long int ans=INT_MAX,op=INT_MAX;
        string s;
        cin >> s;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        map < char , int > mp;
        for(int i=0;i<s.length();i++)
        {
            if( (mp.find(s[i])) != mp.end() )
                mp[s[i]]++;
            else
                mp.insert({s[i],1});
        }
        vector <int> v;
        for(map < char , int >::iterator it=mp.begin();it!=mp.end();it++)
            v.push_back(it->second);
        sort(v.begin(),v.end());
        ch=v.size();
        for(int i=1;i<=26;i++)
        {
            vector<int> p=v;
            if(((s.length())%i)==0)
            {
                ans=0;
                freq=(s.length())/i;
                if(i<ch)
                {
                    int m=ch-i;
                    for(int i=0;i<m;i++)
                        ans+=p[i];
                    for(int i=0;i<p.size();i++)
                        p[i]-=freq;
                    vector <int>::iterator itr,it=upper_bound(p.begin(),p.end(),0);
                    for(itr=it;itr!=p.end();itr++)
                        ans+=(*itr);
                }
                else //if(i>ch)
                {
                    for(int i=0;i<p.size();i++)
                        p[i]-=freq;
                    vector <int>::iterator itr,it=upper_bound(p.begin(),p.end(),0);
                    for(itr=it;itr!=p.end();itr++)
                        ans+=(*itr);
                }
            }
            op=std::min(op,ans);
        }
        cout << op << endl;
    }
}
