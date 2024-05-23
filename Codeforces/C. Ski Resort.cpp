//Author:  Rajesh Biswas
//Date  :  27.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k,q,res=0,x,cnt=0,cn=0,i;
    cin>>n>>k>>q;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x<=q)
            cnt++;
        else
        {
            cnt=0;
            res+=(cn*(cn+1)/2);
            cn=0;
        }
        if(cnt>=k)
            cn++;
        if(i==n)
            res+=(cn*(cn+1)/2);
    }
    cout<<res<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}
