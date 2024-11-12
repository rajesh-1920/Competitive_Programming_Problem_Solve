// Author:  Rajesh Biswas
// Date  :  18.08.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 100009
//------------------------------------------------------------------------------------
void solve(void)
{
    ll w, h, hi, wt, x1, x2, y1, y2;
    cin >> w >> h >> x1 >> y1 >> x2 >> y2 >> wt >> hi;
    ll twt = (1LL * abs(x1 - x2));
    ll thi = (1LL * abs(y1 - y2));
    if (w < twt + wt && h < thi + hi)
    {
        cout << -1;
        nl;
        rrr;
    }
    ll x = INT_MAX, y = INT_MAX;
    if (w >= twt + wt)
    {
        ll t1 = max(x1, w - x2);
        x = max(0LL, wt - t1);
    }
    if (h >= thi + hi)
    {
        ll t1 = max(y1, h - y2);
        y = max(0LL, hi - t1);
    }
    double ans = min(x, y);
    cout << fixed << showpoint << setprecision(9) << ans;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
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