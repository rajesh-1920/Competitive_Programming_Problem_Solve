//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
ll sum(ll a[],ll n,ll m)
{
    if(m==1)return a[n];
    return a[n]+(sum(a,n-1,m-1));
}
void solve(void)
{
    ll  n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    cout<<sum(a,n-1,m)<<'\n';
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
