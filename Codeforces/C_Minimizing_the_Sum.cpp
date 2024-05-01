// Author:  Rajesh Biswas
// Date  :  30.04.2024

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
    ll n, k, sum = 0, i, sub = 0, x = 0, mn = INT_MAX;
    cin >> n >> k;
    multiset<pair<ll, pair<ll, ll>>> d;
    for (i = 0; i < n; i++)
    {
        cin >> sub;
        mn = min(mn, sub);
        sum += sub;
        if (i > 0)
            d.insert({1LL * abs(sub - x), {x, sub}});
        x = sub;
    }
    if (n+1 <= k)
    {
        cout << mn * n;
        nl;
        rrr;
    }
    sub = 0;
    for (i = 0; i < k; i++)
    {
        auto it = --d.end();
        x = (*it).fi;
        d.erase(it);
        sub += x;
    }
    cout << (sum - sub);
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
