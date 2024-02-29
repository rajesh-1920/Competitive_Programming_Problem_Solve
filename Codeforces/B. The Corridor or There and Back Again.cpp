// Author : Rajesh Biswas
// Date : 03.09.2023

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve(void);
//-------------------------------------------------
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test=1;
    cin >> test;
    while (test--)
        solve();
}
//-------------------------------------------------
void solve(void)
{
    ll n,x,y,res=100000000,d;
    cin >>n;
    while (n--)
    {
        cin>>x>>y;
        d=x-1+(y/2)+y%2;
          if(d<res)
              res=d;
    }
    cout<<res<<"\n";
}
