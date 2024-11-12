// Author:  Rajesh Biswas
// Date  :  15.08.2024

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
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
vector<string> v(N);
bool vis[N];
ll cost[N];
void dfs(ll n, vector<ll> &b, vector<ll> &r, vector<ll> &y, vector<ll> &g)
{
    vis[n] = true;
    string s = v[n];

    if (s[0] == 'B' || s[1] == 'B')
    {
        for (auto it : b)
        {
            cost[it] = min(cost[it], cost[n] + (1LL * abs(n - it)));
            if (vis[it] || it == n)
                continue;
            dfs(it, b, r, y, g);
        }
    }
    if (s[0] == 'R' || s[1] == 'R')
    {
        for (auto it : r)
        {
            cost[it] = min(cost[it], cost[n] + (1LL * abs(n - it)));
            if (vis[it] || it == n)
                continue;
            dfs(it, b, r, y, g);
        }
    }
    if (s[0] == 'Y' || s[1] == 'Y')
    {
        for (auto it : y)
        {
            cost[it] = min(cost[it], cost[n] + (1LL * abs(n - it)));
            if (vis[it] || it == n)
                continue;
            dfs(it, b, r, y, g);
        }
    }
    if (s[0] == 'G' || s[1] == 'G')
    {
        for (auto it : g)
        {
            cost[it] = min(cost[it], cost[n] + (1LL * abs(n - it)));
            if (vis[it] || it == n)
                continue;
            dfs(it, b, r, y, g);
        }
    }
}
void reset()
{
    forn(i, 1, N)
    {
        vis[i] = false;
        cost[i] = 1000000000000;
    }
}
void solve(void)
{
    ll n, q;
    cin >> n >> q;
    vector<ll> g, r, y, b;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        v[i] = s;
        if (s[0] == 'B' || s[1] == 'B')
            b.pb(i);
        if (s[0] == 'R' || s[1] == 'R')
            r.pb(i);
        if (s[0] == 'Y' || s[1] == 'Y')
            y.pb(i);
        if (s[0] == 'G' || s[1] == 'G')
            g.pb(i);
    }
    while (q--)
    {
        ll x, t;
        cin >> x >> t;
        reset();
        cost[x] = 0;
        dfs(x, b, r, y, g);
        if (cost[t] == 1000000000000)
            cost[t] = -1;
        cout << cost[t];
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