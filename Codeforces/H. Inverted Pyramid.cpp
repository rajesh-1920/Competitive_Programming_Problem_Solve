//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll i,ll n)
{
    if(i==1)
    {
        for(ll j=0; j<n-i; j++)
            cout<<" ";
        for(ll j=0; j<2*i-1; j++)
            cout<<"*";
        cout<<"\n";
        return;
    }
    for(ll j=0; j<n-i; j++)
        cout<<" ";
    for(ll j=0; j<2*i-1; j++)
        cout<<"*";
    cout<<"\n";
    solve(i-1,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    //while(test--)
    solve(test,test);
    return 0;
}
