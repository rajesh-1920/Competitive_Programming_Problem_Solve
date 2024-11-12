// Author:  Rajesh Biswas
// Date  :  16.08.2024

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
#define N 100009
//------------------------------------------------------------------------------------
ll dis[N];
vector<pair<ll, ll>> g[N];

void dfs(ll nd, ll par)
{
    for (auto it : g[nd])
    {
        ll ch = it.fi;
        if (ch == par)
            continue;
        dis[ch] = dis[nd] + it.sc;
        dfs(ch, nd);
    }
}

void solve(void)
{
    ll n;
    cin >> n;
    forn(i, 1, n)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        g[x].ppb(y, w);
        g[y].ppb(x, w);
    }
    dfs(0, -1);
    ll mx = 0, t = 0;
    forn(i, 0, n)
    {
        if (mx < dis[i])
        {
            mx = dis[i];
            t = i;
        }
        dis[i] = 0;
    }
    dfs(t, -1);
    mx = 0;
    forn(i, 0, n)
    {
        mx = max(mx, dis[i]);
        dis[i] = 0;
        g[i].clear();
    }
    cout << mx;
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
        cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
