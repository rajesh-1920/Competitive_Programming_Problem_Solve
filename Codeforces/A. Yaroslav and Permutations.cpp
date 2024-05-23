//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,t;
    map<ll,ll>mp;
    cin>>n;
    t=n/2;
    if(n%2!=0)
        t++;
    while(n--)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(auto e:mp)
    {
        if(e.second>t)
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
