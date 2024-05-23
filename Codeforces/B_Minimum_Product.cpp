// Author:  Rajesh Biswas
// Date  :  18.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll a, b, x, y, n, ta, tb, tn;
    cin >> a >> b >> x >> y >> n;
    ta = a;
    tb = b;
    tn = n;
    ll t = b - y;
    if (t <= n)
    {
        b -= t;
        n -= t;
    }
    else
    {
        b -= n;
        n = 0;
    }
    ll r = a - x;
    if (r <= n)
        a -= r;
    else
        a -= n;
    ll mn = (a * b);
    n = tn;
    a = ta;
    b = tb;
    t = a - x;
    if (t <= n)
    {
        a -= t;
        n -= t;
    }
    else
    {
        a -= n;
        n = 0;
    }
    r = b - y;
    if (r <= n)
        b -= r;
    else
        b -= n;
    cout << min(mn, (a * b));
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
