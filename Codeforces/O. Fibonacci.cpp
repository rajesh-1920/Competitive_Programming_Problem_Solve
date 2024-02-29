//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fibo(ll n)
{
    if(n==0||n==1)return 0;
    if(n==2)return 1;
    return fibo(n-1)+fibo(n-2);
}
void solve(void)
{
    ll n;
    cin>>n;
    cout<<fibo(n)<<"\n";
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
