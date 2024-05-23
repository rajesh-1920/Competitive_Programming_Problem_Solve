//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fr first
#define sc second
bool cmp(pair<pair<ll,ll>,ll >a,pair<pair<ll,ll>,ll >b)
{
    if(a.fr.fr<b.fr.fr)return true;
    else if(a.fr.fr>b.fr.fr)return false;
    else
    {
        if(a.fr.sc>b.fr.sc)return true;
        return false;
    }
}
void solve(void)
{
    ll n,mx=0,mn=1e15;
    cin>>n;
    vector<pair<pair<ll,ll>,ll > >vec;
    for(ll i=1; i<=n; i++)
    {
        ll x,y;
        cin>>x>>y;
        mn=min(mn,x);
        mx=max(mx,y);
        vec.push_back({{x,y},i});
    }
    sort(vec.begin(),vec.end(),cmp);
    if(vec[0].fr.fr==mn&&vec[0].fr.sc==mx)
        cout<<vec[0].sc<<"\n";
    else
        cout<<-1<<"\n";
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
