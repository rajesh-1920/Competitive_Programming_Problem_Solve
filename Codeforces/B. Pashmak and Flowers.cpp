//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i,mx,mn=1e14,cmn,cmx;
    cin>>n;
    ll a[n];
    mx=cmn=cmx=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(mn==a[i])
            cmn++;
        if(mx==a[i])
            cmx++;
    }
    ll res=cmn*cmx;
    if(mn==mx)
        res=(n-1)*(n)/2;
    cout<<(mx-mn)<<" "<<res<<"\n";
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
