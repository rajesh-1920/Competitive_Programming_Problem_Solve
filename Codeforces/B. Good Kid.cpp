//Author:  Rajesh Biswas
//Date  :  19.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    ll p=1;
    a[0]+=1;
    for(i=0; i<n; i++)
        p*=a[i];
    cout<<p<<"\n";
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
