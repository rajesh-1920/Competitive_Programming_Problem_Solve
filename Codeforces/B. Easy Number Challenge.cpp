//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=(1<<30);
ll NOD(ll n);
map<ll,ll>mp;
void solve(void)
{
    ll a,b,c,res=0;
    cin>>a>>b>>c;
    for(ll i=1; i<=a; i++)
    {
        for(ll j=1; j<=b; j++)
        {
            for(ll k=1; k<=c; k++)
            {
                if(mp[i*j*k]==0)
                    mp[i*j*k]=NOD(i*j*k);
                res=(res+mp[i*j*k])%d;
            }
        }
    }
    cout<<res<<'\n';
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
ll NOD(ll n)
{
    ll cnt=0,sq=sqrt(n);
    for(ll i=1; i<=sq; i++)
    {
        if(n%i==0)
        {
            cnt=(cnt+1)%d;
            if(i!=n/i)
                cnt=(cnt+1)%d;
        }
    }
    return cnt;
}
