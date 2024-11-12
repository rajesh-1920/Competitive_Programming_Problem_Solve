// Author:  Rajesh Biswas
// Date  :  11.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 200009
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
vector<ll> dv[N + 5];
void sieve()
{
    for (ll i = 1; i <= N; i++)
    {
        for (ll j = i; j <= N; j += i)
            dv[j].push_back(i);
    }
}
void solve()
{
    ll h, n, mx = 0, res = 0;
    cin >> h >> n;
    vector<ll> v, t;
    for (int i = 0; i <= N; i++)
    {
        v.pb(0);
        t.pb(0);
    }
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        v[y] += x;
        h -= x;
        t[n] = 0;
    }
    while (true)
    {
        res++;
        if (h <= 0)
        {
            cout << res;
            nl;
            rrr;
        }
        ll q, sz = dv[res].size();
        if (sz > 1)
        {
            ll y = dv[res][sz - 2];
            q = t[y] + v[dv[res][sz - 1]];
        }
        else
        {
            q = v[dv[res][sz - 1]];
        }
        h -= q;
        t[res] = q;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    sieve();
    //  cout << fixed << showpoint << setprecision(0);
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
