//Author : Rajesh Biswas
//Date : 12.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    ll n,i,x,j;
    vector<pair<ll,ll> > a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(),a.end());
    j=n;
    vector<ll> res(n,0);
    for(i=0; i<n; i++)
    {
        res[a[i].second]=j;
        j--;
    }
    for(i=0; i<n; i++)
        cout<<res[i]<<" ";
    cout<<"\n";
}
