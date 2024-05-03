// Author:  Rajesh Biswas
// Date  :  02.05.2024

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
ll a[N], p[N], mxp, k, n;
ll rmax(ll r, ll i, ll cnt)
{
    ll x = (k - cnt);
    if (i == mxp || min(n, k - 1) <= cnt)
        return r + a[i] * x;
    ll t1 = rmax(r + a[i], p[i], cnt + 1);
    ll t2 = r + a[i] * x;
    return max(t1, t2);
}
void solve()
{
    ll pb, ps, i, mx = -1;
    cin >> n >> k >> pb >> ps;
    mxp = -1;
    for (i = 1; i <= n; i++)
        cin >> p[i];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (mx <= a[i])
        {
            mx = a[i];
            mxp = i;
        }
    }
    ll tb = rmax(0, pb, 0);
    ll ts = rmax(0, ps, 0);
    cout << (tb > ts ? "Bodya\n" : (tb < ts ? "Sasha\n" : "Draw\n"));
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
