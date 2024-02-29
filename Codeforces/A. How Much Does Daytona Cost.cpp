//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k,fl=0;
    cin>>n>>k;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x==k)
            fl++;
    }
    if(fl==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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
