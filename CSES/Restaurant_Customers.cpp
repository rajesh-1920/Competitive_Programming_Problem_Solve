// Author:  Rajesh Biswas
// Date  :  27.02.2024

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
map<ll, ll> mp;
void solve(void)
{
    ll n, i, a, b, mx = 0, x;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    a = 0;
    for (auto it : mp)
    {
        x = it.fi;
        a += it.sc;
        mp[x] = a;
        mx = max(a, mx);
    }
    cout << mx;
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
