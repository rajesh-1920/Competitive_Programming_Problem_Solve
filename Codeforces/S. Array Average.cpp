//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef double ll;
ll res(vector<ll>&a,ll n)
{
    if(n==0.0)return a[n];
    return a[n]+res(a,n-1.0);
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
    cout<<showpoint<<setprecision(7)<<(res(a,n-1.0)/n)<<'\n';
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
