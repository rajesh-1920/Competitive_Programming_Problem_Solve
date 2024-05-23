// Author:  Rajesh Biswas
// Date  :  28.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
#define MOD ((1LL * 1e9) + 7)
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
void solve(void)
{
    ll n, x, i, j;
    cin >> n >> x;
    vector<pair<ll, ll>> a;
    for (i = 1; i <= n; i++)
    {
        cin >> j;
        a.ppb(j, i);
    }
    sort(a.begin(), a.end());
    i = 0;
    j = n - 1;
    while (i <= j)
    {
        if (a[i].fi + a[j].fi == x)
        {
            x = min(a[i].sc, a[j].sc);
            n = max(a[i].sc, a[j].sc);
            if (x != n)
                cout << x << ' ' << n;
            else
                cout << "IMPOSSIBLE";
            rrr;
        }
        if (a[i].fi + a[j].fi > x)
            j--;
        else
            i++;
    }
    cout << "IMPOSSIBLE";
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
