// Author:  Rajesh Biswas
// Date  :  17.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 510
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
int n, m;
string s[N];
vector<int> dep[N], vis[N];
int xx[] = {0, 0, 1, -1};
int yy[] = {1, -1, 0, 0};
bool isvalid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
void dfs(int x, int y)
{
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int a = x + xx[i];
        int b = y + yy[i];
        if (isvalid(a, b) && s[a][b] == '.' && (!vis[a][b]))
        {
            dep[a][b] = (dep[x][y]) + 1;
            dfs(a, b);
        }
    }
}
void solve(void)
{
    int k, x, y;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (s[i][j] == '.')
                x = i, y = j;
    dfs(x, y);
    vector<pair<int, pair<int, int>>> rr;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            rr.push_back({dep[i][j], {i, j}});
    sort(rr.rbegin(), rr.rend());
    for (int i = 0; i < k; i++)
        s[rr[i].sc.fi][rr[i].sc.sc] = 'X';
    for (int i = 0; i < n; i++)
        cout << s[i] << '\n';
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
