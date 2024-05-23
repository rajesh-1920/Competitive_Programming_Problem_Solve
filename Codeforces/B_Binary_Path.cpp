// Author:  Rajesh Biswas
// Date  :  29.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define sn 1000000
#define MOD ((1LL * 1e9) + 7)
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
ll n;
string a[2], r;
bool isvalid(ll x, ll y)
{
    return (x >= 0 && y >= 0 && x < 2 && y < n);
}
ll dp[3][sn] = {-1};
ll ans(ll x, ll y)
{
    if (!isvalid(x, y))
        return 0;
    if (a[x][y] != r[x + y])
        return 0;
    if (x == 1 && y == n - 1)
        return 1;
    if (dp[x][y] != -1)
        return dp[x][y];
    return dp[x][y] = ans(x + 1, y) + ans(x, y + 1);
}
void solve()
{
    ll i, j, cnt = 0, ca = 0, cb = 0, x, y, fl = 0;
    cin >> n;
    vector<ll> ta, tb;
    r.clear();
    cin >> a[0] >> a[1];
    r.pb(a[0][0]);
    j = 0;
    for (i = 1; i < n; i++)
    {
        if (a[1][j] == '0' && a[0][i] == '1')
            break;
        r.pb(a[0][i]);
        j++;
    }
    for (; j < n; j++)
        r.pb(a[1][j]);
    for (i = 0; i <= n; i++)
    {
        dp[0][i] = -1;
        dp[1][i] = -1;
        dp[2][i] = -1;
    }
    cnt = ans(0, 0);
    cout << r;
    nl;
    cout << cnt;
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
/*
    for(auto &x:v)cin>>x;
*/