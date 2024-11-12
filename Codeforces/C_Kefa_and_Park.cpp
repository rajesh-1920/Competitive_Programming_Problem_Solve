// Author:  Rajesh Biswas
// Date  :  17.07.2024

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
#define N 100009
//------------------------------------------------------------------------------------
vector<ll> g[N], iscat(N);
ll n, m, vis[N], ispar[N];
void DFS(ll vertex, ll par, ll cat)
{
    vis[vertex] = 1;
    for (auto child : g[vertex])
    {
        if (!vis[child])
        {
            if (iscat[child])
            {
                if (cat + 1 <= m)
                    DFS(child, vertex, cat + 1);
            }
            else
                DFS(child, vertex, 0);
            ispar[vertex] = 1;
        }
    }
}
void solve(void)
{
    cin >> n >> m;
    forn(i, 1, n + 1) cin >> iscat[i];
    forn(i, 1, n)
    {
        ll x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    DFS(1, 0, iscat[1]);
    ll cnt = 0;
    forn(i, 1, n + 1)
    {
        if (!ispar[i] && vis[i])
            cnt++;
    }
    cout << cnt;
    nl;
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