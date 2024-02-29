//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact(ll n);
void solve(void)
{
    ll n;
    cin>>n;
    cout<<fact(n)<<'\n';
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
ll fact(ll n)
{
    if(n==1||n==0)return 1;
    return n*fact(n-1);
}
