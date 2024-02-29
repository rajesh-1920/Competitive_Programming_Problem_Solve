//Author:  Rajesh Biswas
//Date  :  23.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n;
    cin>>n;
    if(n==1)
        cout<<1<<"\n";
    else
    {
        cout<<n<<" "<<1<<" ";
        for(ll i=2; i<n; i++)
            cout<<i<<" ";
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
