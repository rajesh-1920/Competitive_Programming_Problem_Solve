//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,cnt0,cnt5;
    cin>>n;
    cnt0=cnt5=0;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x==5)
            cnt5++;
        if(x==0)
            cnt0++;
    }
    if(cnt0>0&&cnt5>=9)
    {
        ll i,t=cnt5/9;
        for(i=0; i<t*9; i++)
            cout<<5;
        for(i=0; i<cnt0; i++)
            cout<<0;
        cout<<"\n";
    }
    else if(cnt0>0)
        cout<<"0\n";
    else
        cout<<"-1\n";
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
