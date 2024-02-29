//Author:  Rajesh Biswas
//Date  :  23.09.2023

#include<bits/stdc++.h>
#define be begin()
#define en end()
#define fi first
#define sc second
using namespace std;
typedef long long int ll;

void solve(void)
{
    vector<pair<ll,ll> >p;
    ll n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        p.push_back({x,i});
    }
    sort(p.be,p.en);
    if(p[0].fi==p[1].fi)
        cout<<"Still Rozdil\n";
    else
        cout<<p[0].sc<<"\n";
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
