// Author:  Rajesh Biswas
// Date  :  17.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef int ll;

void solve(void)
{
    ll n, mx = 0, x, y;
    map<pair<ll, ll>, ll> res;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        res[{x, y}]++;
        mx = max(mx, (res[{x, y}]));
    }
    cout << mx << '\n';
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
