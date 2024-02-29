//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    int n,i;
    cin>>n;
    if(n==1)
    {
        cout<<"1\n";
        return;
    }
    if(n<4)
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    for(i=2; i<=n; i+=2)
        cout<<i<<' ';
    for(i=1; i<=n; i+=2)
        cout<<i<<' ';
    cout<<'\n';
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
