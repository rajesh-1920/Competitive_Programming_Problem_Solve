//Author:  Rajesh Biswas
//Date  :  05.10.2023

#include<bits/stdc++.h>
#define fr first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,x,y;
    cin>>n;
    ll sx=0,sy=0,fl=0;
    while(n--)
    {
        cin>>x>>y;
        sx+=x;
        sy+=y;
        if((x%2==0&&y%2!=0)||(x%2!=0&&y%2==0))fl=1;
    }
    if(sx%2==0&&sy%2==0)cout<<0<<'\n';
    else if((sx%2!=0&&sy%2!=0)&&fl==1)cout<<1<<'\n';
    else cout<<-1<<'\n';
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
