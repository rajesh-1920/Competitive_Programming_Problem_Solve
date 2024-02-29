//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,a,b,res=0;
    //vector<ll>v;
    cin>>a>>b>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        res+=(b-1);
        b=1;
        b=min(b+x,a);
    }
    cout<<res+b<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}
