//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s1,s2;
    map<char,ll> mp1,mp2;
    getline(cin,s1);
    getline(cin,s2);
    for(ll i=0; i<s1.size(); i++)
    {
        if(s1[i]==' ')
            continue;
        mp1[s1[i]]++;
    }
    for(ll i=0; i<s2.size(); i++)
    {
        if(s2[i]==' ')
            continue;
        mp2[s2[i]]++;
    }
    for(auto fr:mp2)
    {
        if(mp1[fr.first]<fr.second)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
