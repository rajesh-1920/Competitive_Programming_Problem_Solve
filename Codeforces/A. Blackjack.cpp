// Author:  Rajesh Biswas
// Date  :  02.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n,res,temp;
    cin>>n;
    temp=n-10;
    if(temp>11||temp<1)res=0;
    else if(temp==10)res=15;
    else res=4;
    cout<<res<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
