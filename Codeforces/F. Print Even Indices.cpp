//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void value(ll a[],ll n)
{
    if(n==0)
    {
        cout<<a[n];
        return;
    }
    cout<<a[n]<<' ';
    value(a,n-2);
}
void solve(void)
{
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    n--;
    if(n%2!=0)
        n--;
    value(a,n);
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
