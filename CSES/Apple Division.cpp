//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
ll res(vector<ll> &a,ll pos,ll s1,ll s2)
{
    if(pos<0)return abs(s1-s2);
    ll rs1=res(a,pos-1,s1+a[pos],s2);
    ll rs2=res(a,pos-1,s1,s2+a[pos]);
    return min(rs1,rs2);
}
void solve(void)
{
    ll n,x;
    cin>>n;
    vector<ll>a;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cout<<res(a,n-1,0,0)<<'\n';
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
