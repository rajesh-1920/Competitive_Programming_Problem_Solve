//Author:  Rajesh Biswas
//Date  :  09.10.2023

#include<bits/stdc++.h>
#define fr first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i,st=1,en,j;
    cin>>n;
    en=n*n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n/2; j++)
        {
            cout<<st<<" ";
            st++;
        }
        for(j=0; j<n/2; j++)
        {
            cout<<en<<" ";
            en--;
        }
        cout<<'\n';
    }
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
