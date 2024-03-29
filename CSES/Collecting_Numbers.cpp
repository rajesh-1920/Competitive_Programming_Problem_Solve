// Author:  Rajesh Biswas
// Date  :  29.02.2024

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
    ll n, i, j, mx = 0, t;
    cin >> n;
    vector<ll> a;
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        a.pb(t);
        mp.insert({t, i});
    }
    t = 1;
    while (true)
    {
        if (a.size() == 0)
        {
            cout << mx;
            rrr;
        }
        auto it = (mp.lower_bound(t));
        t = (*it).fi;
        i = mp[t];
        n = a.size();
        while (i < n)
        {
            mp.erase(a[i]);
            i++;
        }
        mx++;
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
