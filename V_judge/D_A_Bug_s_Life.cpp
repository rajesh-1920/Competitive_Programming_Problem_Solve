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
#define N 1000009
//------------------------------------------------------------------------------------
vector<ll> g[N];
ll vis[N], fl, color[N];

void dfs(ll node, ll col)
{
    vis[node] = 1;
    color[node] = col;
    for (auto it : g[node])
    {
        if (vis[it])
        {
            //cout<<color[it]<<' '<<col<<'\n';
            if (col == color[it] )
                fl = 1;
        }
        else
            dfs(it, 1 ^ col);
    }
}

void reset(ll n)
{
    f(i, 0, n + 1)
    {
        vis[i] = 0;
        color[i] = 0;
        g[i].clear();
    }
}
void solve(void)
{
    ll n, m;
    cin >> n >> m;
    reset(n);
    f(i, 0, m)
    {
        ll x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    fl = 0;
    f(i, 0, n + 1)
    {
        if (vis[i])
            continue;
        dfs(i, 0);
    }
    if (fl)
        cout << "Suspicious bugs found!\n";
    else
        cout << "No suspicious bugs found!\n";
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
        cout << "Scenario #" << T << ":\n";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
