// Author:  Rajesh Biswas
// Date  :  27.04.2024

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
    ll n, m, i, j;
    cin >> n >> m;
    char s[n][m + 1];
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> s[i][j];
            mp[s[i][j]]++;
        }
    }
    if (mp.size() == 1)
    {
        YES;
        rrr;
    }
    ll cub = 0, cdb = 0, clb = 0, crb = 0;
    ll cuw = 0, cdw = 0, clw = 0, crw = 0;
    for (i = 0; i < m; i++)
    {
        if (s[0][i] == 'W')
            cuw = 1;
        else
            cub = 1;
        if (s[n-1][i] == 'W')
            cdw = 1;
        else
            cdb = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (s[i][m - 1] == 'W')
            crw = 1;
        else
            crb = 1;
        if (s[i][0] == 'W')
            clw = 1;
        else
            clb = 1;
    }
    if ((cub && cdb && clb && crb) || (cuw && cdw && clw && crw))
        YES;
    else
        NO;
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
