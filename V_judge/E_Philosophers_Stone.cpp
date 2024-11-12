// Author:  Rajesh Biswas
// Date  :  27.08.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define rrr return
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 1009
//------------------------------------------------------------------------------------
ll a[N][N], w, h, dp[N][N];
ll ok(ll i, ll j)
{
    if (i > h || j > w || j < 1 || i < 1)
        rrr 0;
    if (dp[i][j] != -1)
        rrr dp[i][j];
    ll ans = ok(i + 1, j) + a[i][j];
    ans = max(ans, ok(i + 1, j + 1) + a[i][j]);
    ans = max(ans, ok(i + 1, j - 1) + a[i][j]);
    // cout << i << ' ' << j << '\n';
    rrr dp[i][j] = ans;
}
void solve(void)
{
    cin >> h >> w;
    f(i, 1, h + 1)
    {
        f(j, 1, w + 1)
        {
            cin >> a[i][j];
            dp[i][j] = -1;
        }
    }
    ll ans = 0;
    f(i, 1, w + 1)
    {
        ans = max(ans, ok(1, i));
        // nl;
    }
    cout << ans;
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
