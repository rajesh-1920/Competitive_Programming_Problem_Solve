// Author:  Rajesh Biswas
// Date  :  03.05.2024

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
    ll n, h, m, i, x, y, fl = 1;
    cin >> n >> h >> m;
    vector<pair<ll, ll>> v;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    x = y = 0;
    for (i = 0; i < n; i++)
    {

        if (h < v[i].fi || (h == v[i].fi && m <= v[i].sc))
        {
            fl = 0;
            x = (60 * (v[i].fi - h) + v[i].sc - m);
            break;
        }
    }
    if (fl)
    {
        x = (60 * (v[0].fi - h) + v[0].sc - m);
        if (x < 0)
            x += (60 * 24);
    }
    cout << x / 60 << ' ' << x % 60;
    nl;
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
