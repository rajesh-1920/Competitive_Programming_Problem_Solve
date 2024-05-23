//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,res=1,m=1e9+7;
    cin>>n;
    for(ll i=1; i<=n; i++)
        res=((res*2)%m);
    cout<<res<<'\n';
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
