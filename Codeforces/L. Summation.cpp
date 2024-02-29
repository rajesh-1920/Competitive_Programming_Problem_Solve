//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum(ll a[],ll n)
{
    if(n==0)return a[n];
    return a[n]+sum(a,n-1);
}
void solve(void)
{
    ll i,n;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<sum(a,n-1)<<'\n';
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
