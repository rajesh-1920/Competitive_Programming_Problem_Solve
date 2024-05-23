// Author:  Rajesh Biswas
// Date  :  08.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 200000 + 100
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
ll n, mx;
vector<ll> a, dp(sn);
ll grap(ll i)
{
    if (i > n)
        return 0;
    if (dp[i] >= 0)
        return dp[i];
    return dp[i] = max(dp[i], grap(i + a[i]) + a[i]);
}
void solve()
{
    fill(dp.begin(), dp.end(), -1);
    a.clear();
    a.pb(0);
    mx = 0;
    ll i, x;
    cin >> n;
    i = n;
    while (i--)
    {
        cin >> x;
        a.pb(x);
    }
    x = 0;
    for (i = 1; i <= n; i++)
        x = max(x, grap(i));
    cout << x;
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
