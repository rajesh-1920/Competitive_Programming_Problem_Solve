// Author:  Rajesh Biswas
// Date  :  01.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll a, b, x, y, g;
    cin >> a >> b >> x >> y;
    g = __gcd(x, y);
    x /= g;
    y /= g;
    cout << min((a / x), (b / y));
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/