//Author : Rajesh Biswas
//Date : 16.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main()
{
    ll test=1;
    //cin>>test;
    while(test--)
        solve();
    return 0;
}
void solve(void)
{
    ll n,m,i,x,v_cnt=0,p_cnt=0;
    vector<pair<ll,ll> >vec;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        vec.push_back({x,i});
    }
    sort(vec.begin(),vec.end());
    cin>>m;
    while(m--)
    {
        cin>>x;
        v_cnt+=(vec[x-1].second);
        p_cnt+=n+1-(vec[x-1].second);
    }
    cout<<v_cnt<<" "<<p_cnt<<"\n";
}
