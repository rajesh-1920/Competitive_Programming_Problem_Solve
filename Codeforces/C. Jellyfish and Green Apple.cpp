//Author:  Rajesh Biswas
//Date  :  01.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,m,res=0,cnt=0;
    cin>>n>>m;
    n%=m;
    while(1)
    {
        if(n%m==0)
        {
            break;
        }
        if(cnt>=999)
        {
            res=-1;
            break;
        }
        n%=m;
        res+=n;
        n*=2;
        cnt++;
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
