// Author:  Rajesh Biswas
// Date  :  09.04.2024

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
void solve()
{
    ll n, c, d, i, j, x, mn = INT_MAX;
    cin >> n >> c >> d;
    unordered_map<ll, ll> mp;
    for (i = 0; i < (n * n); i++)
    {
        cin >> x;
        mp[x]++;
        mn = min(mn, x);
    }
    for (j = 0; j < n; j++)
    {
        x = mn;
        mn = x + d;
        for (i = 0; i < n; i++)
        {
            if (mp[x] < 1)
            {
                NO;
                rrr;
            }
            mp[x]--;
            x += c;
        }
    }
    YES;
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
