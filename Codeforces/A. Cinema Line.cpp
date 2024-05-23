//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
#define fr first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,x,fl=1;
    map<ll,ll>mp;
    mp[25]=0;
    mp[50]=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x==25)mp[x]++;
        else if(x==50)
        {
            if(mp[25]>=1)
            {
                mp[25]--;
                mp[50]++;
            }
            else fl=0;
        }
        else if(x==100)
        {
            if(mp[50]>=1&&mp[25]>=1)
            {
                mp[50]--;
                mp[25]--;
            }
            else if(mp[25]>=3)
            {
                mp[25]--;
                mp[25]--;
                mp[25]--;
            }
            else fl=0;
        }
    }
    if(fl==1)cout<<"YES\n";
    else cout<<"NO\n";
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
