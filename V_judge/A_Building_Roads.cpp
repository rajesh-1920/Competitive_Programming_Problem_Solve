// Author:  Rajesh Biswas
// Date  :  17.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 200009
#define MOD 1000000007
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
int n;
vector<int> gr[N];
vector<int> vis(N, 0);
void dfs(int x)
{
    vis[x] = 1;
    for (auto ii : gr[x])
        if (!vis[ii])
            dfs(ii);
}
void solve(void)
{
    int m;
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    dfs(1);
    vector<pair<int, int>> res;
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
        {
            res.push_back({1, i});
            dfs(i);
        }
    }
    cout << res.size() << '\n';
    for (auto ii : res)
        cout << ii.fi << ' ' << ii.sc << '\n';
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
/*
    for(auto &x:v)cin>>x;
*/
