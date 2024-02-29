//Author:  Rajesh Biswas
//Date  :  24.09.2023

#include<bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define pr pair<ll,ll>
#define vt vector<ll>
#define vtp vector<pr>
#define pb push_back

#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define fs first
#define sc second

#define no cout<<"No\n"
#define yes cout<<"Yes\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n,i,j;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<n-i; j++)
            cout<<"  ";
        if(i==0)
        {
            cout<<0<<"\n";
            continue;
        }
        for(j=0; j<=i; j++)
            cout<<j<<" ";
        for(j=i-1; j>0; j--)
            cout<<j<<" ";
        if(i!=0)
            cout<<0;
        cout<<"\n";
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<n-i; j++)
            cout<<"  ";
        if(i==0)
        {
            cout<<0<<"\n";
            continue;
        }
        for(j=0; j<=i; j++)
            cout<<j<<" ";
        for(j=i-1; j>0; j--)
            cout<<j<<" ";
        if(i!=0)
            cout<<0;
        cout<<"\n";
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
