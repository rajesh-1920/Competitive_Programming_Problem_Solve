//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i,ax=0,ex=0;
    cin>>n;
    for(i=1; i<n; i++)
    {
        ll x;
        cin>>x;
        ax^=i;
        ex^=x;
    }
    cout<<(ax^ex^n)<<'\n';
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
