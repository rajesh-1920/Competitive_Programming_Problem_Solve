// Author:  Rajesh Biswas
// Date  :  23.06.2024

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
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5][m + 5], b[n + 5][m + 5];
    for (int i = 0; i <= n + 1; i++)
        for (int j = 0; j <= m + 1; j++)
        {
            if (i > 0 && i <= n && j > 0 && j <= m)
                cin >> a[i][j];
            else
                a[i][j] = 0;
            b[i][j] = a[i][j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] > a[i + 1][j] && a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1])
            {
                int t1 = a[i][j + 1];
                int t2 = a[i][j - 1];
                int t3 = a[i + 1][j];
                int t4 = a[i - 1][j];
                int x = max({t1, t2, t3, t4});
                b[i][j] = x;
            }
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << b[i][j] << ' ';
        nl;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
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
