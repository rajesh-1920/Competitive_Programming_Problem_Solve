//Author:  Rajesh Biswas
//Date  :  07.10.2023

#include<bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef unsigned long long int ll;
ll res(ll n)
{
    ll cnt=0;
    if(n==1)return cnt;
    return cnt+res(n/2)+1;
}
void solve(void)
{
    ll n;
    cin>>n;
    cout<<res(n)<<'\n';
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
