//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll res(vector<ll>&a,ll n)
{
    if(n==0)
    {
        cout<<a[n]<<" ";
        return a[n];
    }
    ll r=max(a[n],res(a,n-1));
    cout<<max(a[n],r)<<" ";
    return r;
}
void solve(void)
{
    ll n,i,x;
    vector<ll>a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    ll t=res(a,n-1);
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
