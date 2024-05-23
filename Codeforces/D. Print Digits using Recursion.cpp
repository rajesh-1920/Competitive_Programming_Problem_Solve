//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void print(ll n)
{
    if(n<10)
    {
        cout<<n<<" ";
        return;
    }
    print(n/10);
    cout<<(n%10)<<" ";
}
void solve(void)
{
    ll n;
    cin>>n;
    print(n);
    cout<<'\n';
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
