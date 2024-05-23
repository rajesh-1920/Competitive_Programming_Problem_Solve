// Author:  Rajesh Biswas
// Date  :  22.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
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
vector<vector<ll>> v(N);
ll cat[N];
ll n, m,cnt;
void dfs(ll cur)
{
    
}
void solve()
{
    ll i, x, y;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> cat[i];
    for (i = 1; i < n; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
    }
    cnt=0;
    dfs(1);
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
