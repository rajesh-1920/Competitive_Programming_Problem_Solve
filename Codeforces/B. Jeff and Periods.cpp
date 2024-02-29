//Author:  Rajesh Biswas
//Date  :  28.09.2023

#include<bits/stdc++.h>
using namespace std;
#define fr first
#define sc second
typedef long long int ll;
void solve(void)
{
    ll n,i;
    map<ll,ll>a,b,d,t;
    map<ll,ll>::iterator it;
    cin>>n;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(b[x]==0)
        {
            b[x]++;
            a[x]=i;
        }
        else if(b[x]==1)
        {
            b[x]++;
            d[x]=i-a[x];
            a[x]=i;
        }
        else
        {
            if(d[x]==(i-a[x]))
            {
                b[x]++;
                a[x]=i;
            }
            else
                t[x]=-1;
        }
        if(t[x]==-1)
        {
            b.erase(x);
            d.erase(x);
        }
    }
    cout<<b.size()<<"\n";
    for(it=b.begin(); it!=b.end(); it++)
    {
        if((*it).sc==1)
            cout<<((*it).fr)<<" "<<"0\n";
        else
            cout<<((*it).fr)<<" "<<d[(*it).fr]<<"\n";
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
