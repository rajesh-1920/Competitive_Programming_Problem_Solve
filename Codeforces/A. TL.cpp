//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    int n,m,mx=0,mn=10000,mna=10000;
    cin>>n>>m;
    while(n--)
    {
        int x;
        cin>>x;
        mx=max(mx,x);
        mna=min(mna,x);
    }
    while(m--)
    {
        int x;
        cin>>x;
        mn=min(mn,x);
    }
    if(mna*2<mn&&mx<mn)
        cout<<(max(mx,mna*2))<<"\n";
    else
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
