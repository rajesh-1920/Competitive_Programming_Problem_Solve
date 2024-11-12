// Author:  Rajesh Biswas
// Date  :  14.07.2024

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
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 1000009
//------------------------------------------------------------------------------------
ll lp[N];
void sieve()
{
    for (ll i = 2; i < N; i++)
    {
        if (lp[i] == 0)
            for (ll j = i; j < N; j += i)
            {
                if (lp[j] == 0)
                    lp[j] = i;
            }
    }
}
ll binp(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    rrr ans;
}
void solve(void)
{
    ll x, ans = 1, t;
    cin >> x;
    t = x;
    while (x > 1)
    {
        ll p = lp[x], cnt = 1;
        while (x % p == 0)
        {
            x /= p;
            cnt++;
        }
        ans *= ((binp(p, cnt) - 1) / (p - 1));
    }
    ans -= t;
    if (ans > t)
        cout << "abundant\n";
    else if (ans < t)
        cout << "deficient\n";
    else
        cout << "perfect\n";
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    sieve();
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
