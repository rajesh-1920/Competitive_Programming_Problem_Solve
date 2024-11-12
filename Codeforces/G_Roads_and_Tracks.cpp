// Author:  Rajesh Biswas
// Date  :  30.08.2024

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
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
ll n, m, cost, dis[N][100];
ll a[N + 5][100], b[N + 5][100], tt[N + 5];
bool vis[N][100], pos[N][100];
void solve(void)
{
    cost = 0;
    cin >> n >> m;
    f(i, 1, n + 1)
    {
        ll mn = LLONG_MAX;
        f(j, 1, m + 1)
        {
            cin >> a[i][j];
            mn = min(mn, a[i][j]);
        }
        cost += mn;
        tt[i] = mn;
        f(j, 1, m + 1)
        {
            if (mn == a[i][j])
                pos[i][j] = true;
            dis[i][j] = 1000000000000000000;
        }
    }
    dis[1][1] = 0;
    f(i, 1, n + 1)
    {
        f(j, 1, m)
        {
            cin >> b[i][j];
            dis[i][j + 1] = dis[i][j] + b[i][j];
        }
    }
    ll y = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j < m; j++)
        {
            if(pos[i][j])
            break;
        }
    }
    cout << cost << ' ' << dis[5][2];
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
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/