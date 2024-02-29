//Author : Rajesh Biswas
//Date : 25.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ll test=1;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    ll n,i,g=0;
    cin>>n;
    ll a[i];
    for(i=0; i<26; i++)
    {
        cin>>a[i];
        g=__gcd(g,a[i]);
    }

}
