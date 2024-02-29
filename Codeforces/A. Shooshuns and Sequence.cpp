//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k,i;
    vector<ll> a,b;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    b=a;
    sort(b.begin(),b.end());
    if(b[0]==b[n-1])
    {
        cout<<0<<"\n";
        return;
    }
    b=a;
    sort(b.begin()+k-1,b.end());
    if(b[k-1]==b[n-1])
    {
        for(i=k-1; i>0; i--)
        {
            if(b[i]!=b[i-1])
            {
                cout<<i<<"\n";
                return;
            }
        }
    }
    cout<<-1<<"\n";
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
