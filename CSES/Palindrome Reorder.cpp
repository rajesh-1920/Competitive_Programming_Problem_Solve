//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s;
    cin>>s;
    map<char,ll>mp;
    ll i,l=s.size(),od=0,ev=0;
    for(i=0; i<l; i++)
        mp[s[i]]++;
    char ch;
    for(auto e:mp)
    {
        if(e.second%2==0)ev++;
        else
        {
            od++;
            ch=e.first;
        }
    }
    if((l%2==0&&od>0)||(l%2!=0&&od>1))
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    vector<char>v1,v2;
    for(auto e:mp)
    {
        if(e.first!=ch)
        {
            for(ll j=0; 2*j<e.second; j++)
            {
                v1.push_back(e.first);
                v2.push_back(e.first);
            }
        }
    }
    for(ll j=0; j<mp[ch]; j++)
        v1.push_back(ch);
    for(i=0; i<v1.size(); i++)
        cout<<v1[i];
    for(i=v2.size()-1; i>=0; i--)
        cout<<v2[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
        solve();
    return 0;
}
