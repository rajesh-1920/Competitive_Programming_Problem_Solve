// Author:  Rajesh Biswas
// Date  :  25.08.2024

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
#define N 1000009
//------------------------------------------------------------------------------------
ll n;
vector<ll> a(N), b(N), c(N);
ll dp[N][3][3][3];
ll ok(ll m, ll a1, ll b1, ll c1)
{
    if (m == 0)
        rrr 0;
    if (dp[m][a1][b1][c1] != -1)
        rrr dp[m][a1][b1][c1];
    ll ans = 0;
    {
        if (a1 < 1)
            ans = max(ans, ok(m - 1, a1 + 1, 0, 0) + a[m]);
        if (b1 < 1)
            ans = max(ans, ok(m - 1, 0, b1 + 1, 0) + b[m]);
        if (c1 < 1)
            ans = max(ans, ok(m - 1, 0, 0, c1 + 1) + c[m]);
    }
    rrr dp[m][a1][b1][c1] = ans;
}
void solve(void)
{
    cin >> n;
    f(i, 1, n + 1)
    {
        cin >> a[i] >> b[i] >> c[i];
        f(j, 0, 3)
            f(l, 0, 3)
                f(k, 0, 3)
                    dp[i][j][l][k] = -1;
    }
    cout << ok(n, 0, 0, 0);
    // for (ll i = 0; i < n; i++)
    //     cout << dp[i] << ' ';
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
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
