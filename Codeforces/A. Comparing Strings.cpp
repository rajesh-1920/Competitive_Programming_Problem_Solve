//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s1,s2;
    cin>>s1>>s2;
    vector<ll> a1,a2;
    char ch='a';
    for(ll i=0; i<26; i++)
    {
        ll x;
        x=count(s1.begin(),s1.end(),ch);
        a1.push_back(x);
        x=count(s2.begin(),s2.end(),ch);
        a2.push_back(x);
        ch++;
    }
    if(s1.size()!=s2.size()||a1!=a2)
    {
        cout<<"NO\n";
        return;
    }
    ll fl=0;
    for(ll i=0; i<s1.size(); i++)
    {
        if(s1[i]!=s2[i])
            fl++;
        if(fl>2)
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
