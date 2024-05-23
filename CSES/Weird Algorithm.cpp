//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n;
    cin>>n;
    while(true)
    {
        if(n==1)
        {
            cout<<n<<'\n';
            break;
        }
        cout<<n<<' ';
        if(n%2==0)n/=2;
        else n= n*3+1;
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
