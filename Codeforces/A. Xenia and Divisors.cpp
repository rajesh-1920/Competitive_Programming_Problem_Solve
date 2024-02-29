//Author:  Rajesh Biswas
//Date  :  30.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i;
    cin>>n;
    map<ll,ll> m;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    ll res[n/3][3];
    for(i=0; i<(n/3); i++)
    {
        if(m[1]>0&&m[3]>0&&m[6]>0)
        {
            res[i][0]=1;
            res[i][1]=3;
            res[i][2]=6;
            m[1]--;
            m[3]--;
            m[6]--;
        }
        else if(m[1]>0&&m[2]>0&&m[6]>0)
        {
            res[i][0]=1;
            res[i][1]=2;
            res[i][2]=6;
            m[1]--;
            m[2]--;
            m[6]--;
        }
        else if(m[1]>0&&m[2]>0&&m[4]>0)
        {
            res[i][0]=1;
            res[i][1]=2;
            res[i][2]=4;
            m[1]--;
            m[2]--;
            m[4]--;
        }
        else
        {
            cout<<-1<<"\n";
            return;
        }
    }
    for(i=0; i<n/3; i++)
    {
        cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<"\n";
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
