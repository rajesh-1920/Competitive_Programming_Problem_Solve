//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void res(vector<ll>&a,vector<ll>&b,ll n)
{
    if(n<0)
    {
        cout<<"YES\n";
        return;
    }
    if(a[n]!=b[n])
    {
        cout<<"NO\n";
        return;
    }
    res(a,b,n-1);
}
void solve(void)
{
    ll n,i,x;
    vector<ll>a,b;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    b=a;
    reverse(b.begin(),b.end());
    res(a,b,n-1);
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
