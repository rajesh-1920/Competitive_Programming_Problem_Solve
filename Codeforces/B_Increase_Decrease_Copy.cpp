// Author:  Rajesh Biswas
// Date  :  30.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll ans = 0, n, mn = INT_MAX, ddd = 0, fl = 0;
    cin >> n;
    int a[n], b[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        ll t = (abs(a[i] - b[n]));
        ll y = (abs(b[n] - b[i]));
        ll x = (abs(a[i] - b[i]));
        ans += x;
        if (t + x <= t + y && t + x <= x + y)
        {
            mn = min(mn, t);
            fl = 0;
        }
        else if (t + y <= t + x && t + y <= x + y)
        {
            mn = min(mn, t + y);
            ddd = x;
            fl = 1;
        }
        else
        {
            mn = min(mn, y);
            fl = 0;
        }

        if ((a[i] <= b[n] && b[n] <= b[i]) || (b[i] <= b[n] && b[n] <= a[i]) || a[i] == b[n])
        {
            mn = 0;
            fl = 0;
        }
    }
    if (fl)
        ans -= ddd;
    cout << ans + 1 + mn;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
