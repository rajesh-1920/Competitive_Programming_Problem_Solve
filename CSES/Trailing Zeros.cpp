//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n;
    cin>>n;
    ll cnt=0,p=5;
    while(n>0)
    {
        cnt+=n/p;
        n/=p;
    }
    cout<<cnt<<'\n';
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
