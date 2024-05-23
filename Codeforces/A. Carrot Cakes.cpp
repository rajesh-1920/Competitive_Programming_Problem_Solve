//Author:  Rajesh Biswas
//Date  :  23.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k,t,d,t1,t2,cnt1,cnt2,c1,c2;
    cin>>n>>t>>k>>d;
    c1=c2=cnt1=cnt2=0;
    for(ll tt=1;; tt++)
    {
        if(tt%t==0)
        {
            cnt1+=k;
            cnt2+=k;
        }
        if(tt>d&&((tt-d)%t==0))
            cnt2+=k;
        if(cnt1>=n&&c1==0)
        {
            t1=tt;
            c1=1;
        }
        if(cnt2>=n&&c2==0)
        {
            t2=tt;
            c2=1;
        }
        if(c1==1&&c2==1)
            break;
    }
    if(t1<=t2)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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
