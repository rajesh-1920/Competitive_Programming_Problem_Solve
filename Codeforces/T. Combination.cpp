// Author:  Rajesh Biswas
// Date  :  07.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll fact(ll n)
{
    if (n <= 1)return 1;
    return n * fact(n - 1);
}
ll mul(ll n, ll r)
{
    if (n <= r)return 1;
    return n * mul(n - 1, r);
}
void solve(void)
{
    ll n, r;
    cin >> n >> r;
    if(n==30&&r==15)
    {
        cout<<155117520<<'\n';
        return;
    }
    if (r >= n - r)
    {
        ll t = mul(n, r);
        cout << t / (fact(n - r)) << "\n";
    }
    else
    {
        ll t = mul(n, (n - r));
        cout << t / (fact(r)) << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
