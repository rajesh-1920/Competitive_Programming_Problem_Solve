//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
#define fr first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i,sum=0;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1; i<=n; i++)
        sum+=(abs(i-a[i-1]));
    cout<<sum<<'\n';
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
