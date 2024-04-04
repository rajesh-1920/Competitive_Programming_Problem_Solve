// Author:  Rajesh Biswas
// Date  :  04.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
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
map<ll, vector<ll>> mp;
map<ll, ll> m;
vector<ll> v;
ll n, mx = 1;
void dfs(ll st, ll cnt)
{
    mx = max(mx, cnt);
    if (m[st] == 0)
    {
        m[st]++;
        for (auto it : mp[st])
        {
            if (v[it] > v[st])
                dfs(it, cnt + 1);
        }
    }
}
void solve()
{
    ll s, i, x, y;
    cin >> n >> s;
    v.push_back(0);
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (i = 1; i < n; i++)
    {
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    dfs(s, 1);
    cout << mx;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
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
