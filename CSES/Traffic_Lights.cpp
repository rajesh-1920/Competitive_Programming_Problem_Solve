// Author:  Rajesh Biswas
// Date  :  01.03.2024

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
    ll n, x, y, t, temp, i;
    cin >> t >> n;
    multiset<pair<ll, pair<ll, ll>>> mp;
    multiset<pair<ll, pair<ll, ll>>>::iterator it;
    mp.insert({t, {0, t}});
    for (i = 0; i < n; i++)
    {
        cin >> t;
        it = --mp.end();
        x = (*it).sc.fi;
        y = (*it).sc.sc;
        if (t > x && t < y)
        {
            mp.erase(it);
            temp = t - x;
            mp.insert({temp, {x, t}});
            temp = y - t;
            mp.insert({temp, {t, y}});
        }
        it = --mp.end();
        x = (*it).fi;
        cout << x << ' ';
    }
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
