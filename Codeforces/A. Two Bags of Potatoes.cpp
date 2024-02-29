//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll y,n,k;
    cin>>y>>k>>n;
    ll t=y/k;
    if(y%k!=0)t++;
    ll st=(t*k)-y;
    if(st+y>n||(st==0&&st+k+y>n))
    {
        cout<<-1<<"\n";
        return;
    }
    if(st==0)
        st+=k;
    while(st+y<=n)
    {
        cout<<st<<" ";
        st+=k;
    }
    cout<<"\n";
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
