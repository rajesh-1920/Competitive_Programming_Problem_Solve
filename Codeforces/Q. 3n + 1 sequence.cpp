//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll res(ll n,ll cnt)
{
    if(n==1)return cnt+1;
    if(n%2==0)return res(n/2,cnt+1);
    if(n%2!=0)return res(3*n+1,cnt+1);
}
void solve(void)
{
    ll n;
    cin>>n;
    cout<<res(n,0)<<'\n';
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
