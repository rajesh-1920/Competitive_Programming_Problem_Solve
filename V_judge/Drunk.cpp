// Author:  Rajesh Biswas
// Date  :  25.08.2024

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
ll vis[N], fl;
void dfs(ll n)
{
    if (fl)
        rrr;
    vis[n] = 1;
    for (auto it : g[n])
    {
        if (!vis[it])
            dfs(it);
        else if (vis[it] == 1)
        {
            fl = 1;
            rrr;
        }
    }
    vis[n] = 2;
}
void solve(void)
{
    f(i, 0, N)
    {
        g[i].clear();
        vis[i] = 0;
    }
    fl = 0;
    ll n, j = 1;
    cin >> n;
    map<string, ll> mp;
    f(i, 0, n)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (mp.find(s1) == mp.end())
            mp[s1] = j++;
        if (mp.find(s2) == mp.end())
            mp[s2] = j++;
        g[mp[s1]].pb(mp[s2]);
    }
    dfs(1);
    if (fl)
        No;
    else
        Yes;
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
