// Author:  Rajesh Biswas
// Date  :  13.07.2024

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
#define N 200009
#define MOD 10000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
//------------------------------------------------------------------------------------
ll bin_expo(ll b, ll p)
{
    ll ans = 1 % MOD;
    while (p > 0)
    {
        if (p & 1)
            ans = (ans % MOD * b % MOD) % MOD;
        b = (b % MOD * b % MOD) % MOD;
        p >>= 1;
    }
    return ans % MOD;
}
void solve(void)
{
    ll n, k;
    while (cin >> n >> k)
    {
        if (n == 0 && k == 0)
            rrr;
        ll t1 = (2LL * bin_expo(n - 1, n - 1)) % MOD;
        ll t2 = bin_expo(n, n);
        ll t3 = (2LL * bin_expo(n - 1, k)) % MOD;
        ll t4 = bin_expo(n, k);
        ll ans = (t1 % MOD + t2 % MOD + t3 % MOD + t4 % MOD) % MOD;
        cout << ans;
        nl;
    }
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
