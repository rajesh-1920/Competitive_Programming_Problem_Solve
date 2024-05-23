// Author:  Rajesh Biswas
// Date  :  06.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, t;
void res(ll i)
{
    if (i == n)
        t = 1;
    if (i * 10 <= n)
        res(i * 10);
    if (i * 20 <= n)
        res(i * 20);
}
void solve(void)
{
    t = 0;
    cin >> n;
    res(1);
    if (t)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}