// Author:  Rajesh Biswas
// Date  :  16.07.2024

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
#define inf 9000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 1000099
//------------------------------------------------------------------------------------
ll n, m;
vector<pair<ll, ll>> g[N];
ll vis[N], dis[N], par[N];

void dijkstra(ll source)
{
    set<pair<ll, ll>> st;
    st.insert({0, source});
    dis[source] = 0;

    while (!st.empty())
    {
        auto it = *st.begin();
        ll v = it.sc;
        st.erase(it);
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto child : g[v])
        {
            ll wt = child.sc;
            if (dis[child.fi] > dis[v] + wt)
            {
                dis[child.fi] = dis[v] + wt;
                st.insert({dis[child.fi], child.fi});
                par[child.fi] = v;
            }
        }
    }
}

void reset()
{
    forn(i, 0, n + 2) vis[i] = 0, dis[i] = inf, par[i] = -1;
}
void solve(void)
{
    cin >> n >> m;
    forn(i, 0, m)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        g[x].ppb(y, w);
        g[y].ppb(x, w);
    }
    reset();
    dijkstra(1);
    if (vis[n] == 0)
        cout << -1;
    else
    {
        vector<ll> ans;
        while (n != -1)
        {
            ans.push_back(n);
            n = par[n];
        }
        reverse(all(ans));
        for (auto it : ans)
            cout << it << ' ';
    }
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