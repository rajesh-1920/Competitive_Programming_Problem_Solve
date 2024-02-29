//Rajesh Biswas
//Date : 19.09.2023

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first>b.first)
        return false;
    else if(a.first<b.first)
        return true;
    else
    {
        if(a.second<b.second)
            return true;
        return false;
    }
}
void solve(void)
{
    ll n,i;
    cin>>n;
    vector<pair<ll,ll> >vec;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        vec.push_back({x,0});
    }
    while(1)
    {
        sort(vec.begin(),vec.end(),cmp);
        ll cnt=0;
        for(i=0; i<n; i++)
        {
            if(vec[i].first<vec[i+1].first&&vec[i+1].second==0&&vec[i].first!=0)
            {
                vec[i].first=0;
                vec[i+1].second=1;
                cnt++;
                break;
            }
        }
        if(cnt==0)
        {
            for(i=0; i<n; i++)
            {
                if(vec[i].first!=0)
                    cnt++;
            }
            cout<<cnt<<"\n";
            return;
        }
    }
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
