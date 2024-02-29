//Author:  Rajesh Biswas
//Date  :  28.09.2023

#include<bits/stdc++.h>
using namespace std;
#define fr first
#define sc second
typedef long long int ll;
void solve(void)
{
    ll k,i,j;
    map<char,ll> mp;
    map<char,ll>::iterator it;
    string s;
    cin>>k>>s;
    for(i=0; i<s.size(); i++)
        mp[s[i]]++;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if((*it).sc%k==0)
            (*it).sc/=k;
        else
        {
            cout<<"-1\n";
            return;
        }
    }
    for(i=0; i<s.size();)
    {
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            for(j=0; j<(*it).sc; j++)
            {
                cout<<(*it).fr;
                i++;
            }
        }
    }
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
