//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll y,x,res;
    cin>>y>>x;
    if(y>=x)
    {
        if(y%2==0)
        {
            res=y*y;
            res=1+(res-x);
        }
        else
        {
            res=(y-1)*(y-1)+1;
            res=res+x-1;
        }
    }
    else
    {
        if(x%2!=0)
        {
            res=x*x;
            res=1+(res-y);
        }
        else
        {
            res=(x-1)*(x-1)+1;
            res=res+y-1;
        }
    }
    cout<<res<<'\n';
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
