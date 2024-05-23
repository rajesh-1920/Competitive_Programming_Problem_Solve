// Author:  Rajesh Biswas
// Date  :  02.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n,sum,ev,od,x;
    cin>>n;
    sum=ev=od=0;
    while(n--)
    {
        cin>>x;
        if(x%2==0)ev++;
        else od++;
        sum+=x;
    }
    if(sum%2==0)cout<<ev<<'\n';
    else cout<<od<<'\n';
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
