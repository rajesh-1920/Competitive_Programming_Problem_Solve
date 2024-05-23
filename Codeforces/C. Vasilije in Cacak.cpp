//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll r1n=(n*(n+1)/2);
    ll r1k=(k*(k+1)/2);
    ll rnk=((n-k)*(n-k+1)/2);
    ll rkn=r1n-rnk;
    if(rkn<x||r1k>x)
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
