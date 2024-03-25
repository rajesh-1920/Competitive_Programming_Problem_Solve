// Author:  Rajesh Biswas
// Date  :  20.03.2024

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
    ll n, i, mx = 0;
    cin >> n;
    vector<ll> a(n + 1), p(n + 1);
    for (i = 1; i <= n; i++)
        cin >> a[i];
    map<ll, ll> mp;
    for (i = 1; i <= n; i++)
    {
        if (!mp[a[i]])
            p[i] = -1;
        else
            p[i] = mp[a[i]];
        mp[a[i]] = i;
    }
    ll res = 0;
    for (i = 1; i <= n; i++)
    {
        mx = max(mx, p[i]);
        res = max(res, i - mx);
    }
    cout << res;
    nl;
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
