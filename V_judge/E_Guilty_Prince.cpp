// Author:  Rajesh Biswas
// Date  :  16.08.2024

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
#define N 109
//------------------------------------------------------------------------------------
string g[N];
ll n, m;
ll X[] = {1, -1, 0, 0};
ll Y[] = {0, 0, 1, -1};
bool vis[N][N];
bool isvalid(ll x, ll y)
{
    rrr(x >= 1 && x <= n && y >= 0 && y < m);
}

void dfs(ll x, ll y)
{
    vis[x][y] = true;
    forn(i, 0, 4)
    {
        ll t1 = x + X[i];
        ll t2 = y + Y[i];
        if (!isvalid(t1, t2))
            continue;
        if (vis[t1][t2] || g[t1][t2] != '.')
            continue;
        dfs(t1, t2);
    }
}

void solve(void)
{
    cin >> m >> n;
    ll x = 1, y = 1;
    forn(i, 1, n + 1)
    {
        cin >> g[i];
        forn(j, 0, m)
        {
            if (g[i][j] == '@')
            {
                x = i;
                y = j;
                //cout << g[i][j] << ' ';
            }
            //cout << g[i][j];
        }
        //cout << g[i] << '\n';
        //nl;
    }
    //cout << x << ' ' << y << '\n';
    dfs(x, y);
    ll cnt = 0;
    forn(i, 1, n + 1)
    {
        forn(j, 0, m)
        {
            if (vis[i][j])
            {
                cnt++;
                // cout << i << ' ' << j << '\n';
            }
            vis[i][j] = false;
        }
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
