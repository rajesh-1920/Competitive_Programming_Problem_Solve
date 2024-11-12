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
vector<ll> g[N];
ll vis[N], dis[N];
void bfs(ll nd)
{
    queue<ll> q;
    q.push(nd);
    vis[nd] = 1;
    while (!q.empty())
    {
        ll t = q.front();
        q.pop();
        for (auto it : g[t])
        {
            if (vis[it])
                continue;
            dis[it] = dis[t] + 1;
            vis[it] = 1;
            q.push(it);
        }
    }
}
void reset()
{
    f(i, 0, N)
    {
        vis[i] = dis[i] = 0;
        g[i].clear();
    }
}
void solve(void)
{
    ll n, r;
    cin >> n >> r;
    reset();
    f(i, 0, r)
    {
        ll x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    ll s, d, ans = 0, temp[n + 5];
    cin >> s >> d;
    bfs(s);
    f(i, 0, n + 1)
    {
        temp[i] = dis[i];
        vis[i] = dis[i] = 0;
    }
    bfs(d);
    f(i, 0, n + 1)
        ans = max(ans, (dis[i] + temp[i]));
    cout << ans;
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
