// Author:  Rajesh Biswas
// Date  :  16.08.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
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
vector<ll> g[N], topo;
ll vis[N], fl;

void dfs(ll node)
{
    if (fl)
        rrr;
    vis[node] = 1;
    for (auto it : g[node])
    {
        if (vis[it] == 1)
        {
            if (it != node)
                fl = 1;
        }
        else if (vis[it] == 0)
            dfs(it);
    }
    vis[node] = 2;
    topo.pb(node);
}

void solve(void)
{
    ll n, m;
    cin >> n >> m;
    f(i, 0, m)
    {
        ll x, y;
        cin >> x >> y;
        g[x].pb(y);
    }
    for (ll i = n; i > 0; i--)
    {
        sort(rall(g[i]));
        if (vis[i] == 0)
        {
            dfs(i);
            // cout << i << ' ';
        }
    }
    reverse(all(topo));
    if (fl)
        cout << "Sandro fails.";
    else
        for (auto it : topo)
            cout << it << ' ';
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
