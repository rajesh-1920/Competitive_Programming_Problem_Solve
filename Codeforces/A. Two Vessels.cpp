// Author : Rajesh Biswas
// Date : 07.09.2023

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
    ll a,b,c,res=0;
    cin>>a>>b>>c;
    if(a<b)
        swap(a,b);
    res=(a-b)/(c*2);
    if((a-b)%(c*2)!=0)
        res++;
    cout<<res<<"\n";
}
