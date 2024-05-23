//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,c1=0,c2=0;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x==100)c1++;
        if(x==200)c2++;
    }
    if(c1%2==0&&c1>0)cout<<"YES\n";
    else if(c2%2==0&&c1==0)cout<<"YES\n";
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
