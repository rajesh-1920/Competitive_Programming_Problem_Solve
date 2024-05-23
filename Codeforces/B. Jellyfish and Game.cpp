//Author:  Rajesh Biswas
//Date  :  01.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    if(k%2==0)
    {
        if(a[0]<b[m-1])swap(a[0],b[m-1]);
        sort(a,a+n);
        sort(b,b+m);
        if(b[0]<a[n-1])swap(b[0],a[n-1]);
    }
    else
    {
        if(a[0]<=b[m-1])swap(a[0],b[m-1]);
        sort(a,a+n);
        sort(b,b+m);
    }
    ll sum=0;
    for(ll i=0; i<n; i++)
        sum+=a[i];
    cout<<sum<<"\n";
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
/*
1
5 4 572637639
924242480 924242480 924242480 924242480 924242480
606050564 606050564 7222523 7222523
*/
