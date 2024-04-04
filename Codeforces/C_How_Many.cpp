// Author:  Rajesh Biswas
// Date  :  04.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
//----------------------------(definition section)-------------------------------------
#define MOD (1000000000 + 7)
#define sn 3000000 + 100
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
const ll N = 1e5 + 10;
//------------------------------------------------------------------------------------
ll A[N][26];
map<ll, ll> mp;
ll largepow(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans % MOD * a % MOD) % MOD;
        a = (a % MOD * a % MOD) % MOD;
        b >>= 1;
    }
    return ans;
}
ll fact(ll n)
{
    if (n == 1)
        return 1;
    if (mp[n])
        return mp[n];
    return mp[n] = (n % MOD * fact(n - 1) % MOD) % MOD;
}
void solve()
{
    ll n, q, x, y, i, j;
    string s;
    cin >> n >> q >> s;
    for (i = 0; i < n; i++)
    {
        A[i + 1][s[i] - 'a']++;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 26; j++)
            A[i + 1][j] += A[i][j];
    }
    while (q--)
    {
        cin >> x >> y;
        ll a[26], s = 0, ans = 1;
        for (i = 0; i < 26; i++)
        {
            a[i] = (A[y][i] - A[x - 1][i]);
            s += a[i];
            if (a[i])
                ans = (ans % MOD * (fact(a[i]) % MOD)) % MOD;
        }
        s = fact(s) % MOD;
        ans = (s % MOD * ((largepow(ans, (MOD - 2))) % MOD)) % MOD;
        cout << ans - 1;
        nl;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
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
