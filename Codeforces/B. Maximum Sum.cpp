//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k;
    vector<ll> v;
    cin>>n>>k;
    while(n--)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    while(k--)
    {
        if(v[0]+v[1]<v[v.size()-1])
        {
            v.erase(v.begin());
            v.erase(v.begin());
        }
        else
            v.erase(--v.end());
    }
    cout<<accumulate(v.begin(),v.end(),0)<<"\n";
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
