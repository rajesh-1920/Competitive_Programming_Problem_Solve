// Author:  Rajesh Biswas
// Date  :  19.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define MOD 1000000007
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})
#define all(v) v.begin(), v.end()

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
#define N 300009
//------------------------------------------------------------------------------------
map<ll, ll> mp;
void solve(void)
{
    ll a, b;
    cin >> a >> b;
    ll x = mp[a - 1], ans = a;
    ll m = x ^ b;
    if (x == b)
        cout << ans;
    else if (m != a)
        cout << ans + 1;
    else
        cout << ans + 2;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    ll x = 0;
    for (ll i = 0; i <= N; i++)
    {
        x = x ^ i;
        mp[i] = x;
    }
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
/*
    for(auto &x:v)cin>>x;
*/
