//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll x,y,z,a1,a2,a3;
    cin>>a1>>a2>>a3;
    ll t=a1*a2/a3;
    y=(ll)sqrt((double)t);
    z=a2/y;
    x=a1/y;
    cout<<(4*(x+y+z))<<"\n";
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
