//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,mx=0,cnt=0;
    cin>>n;
    map<ll,ll> mp;
    while(n--)
    {
        ll x,y;
        cin>>x>>y;
        if(mp[x]==1)
            cnt--;
        else
        {
            cnt++;
            mp[x]++;
        }
        mx=max(mx,cnt);
        if(mp[y]==1)
            cnt--;
        else
        {
            cnt++;
            mp[y]++;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<"\n";
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
