//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void bin(ll n)
{
    if(n==0||n==1)
    {
        cout<<n;
        return;
    }
    bin(n/2);
    cout<<(n%2);
}
void solve(void)
{
    ll n;
    cin>>n;
    bin(n);
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}
