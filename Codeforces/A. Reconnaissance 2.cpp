//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
#define fr first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i,mn=1e14,r1,r2;
    vector<ll> a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
        if(i>0)
        {
            if(abs(a[i]-a[i-1])<abs(mn))
            {
                mn=abs(a[i]-a[i-1]);
                r1=i;
                r2=i+1;
            }
        }
    }
    if(abs(a[0]-a[n-1])<abs(mn))
    {
        r1=1;
        r2=n;
    }
    cout<<r1<<" "<<r2<<"\n";
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
