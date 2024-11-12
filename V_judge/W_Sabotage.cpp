// Author:  Rajesh Biswas
// Date  :  03.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000007
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

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
    vector<ll> v, ans, res;
    ll n, c = 0;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        v.pb(x);
        c = max(c, x);
    }
    // ans.push_back(v.size());
    // sort(all(v));
    // ll mx = v.size();
    // for (int i = 1; i < c; i++)
    // {
    //     auto it = upper_bound(all(v), i);
    //     ll x = v.end() - it;
    //     ans.pb(x);
    //     mx = max(mx, x);
    //     //cout<<x<<' ';
    // }
    // //nl;
    // sort(all(ans));
    // cout << ans.size() << '\n';
    // for (int i = 1; i < mx; i++)
    // {
    //     auto it = upper_bound(all(ans), i);
    //     ll x = ans.end() - it;
    //     cout << x << '\n';
    // }
    sort(rall(v));
    for (auto ii : v)
        cout << ii << '\n';
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
