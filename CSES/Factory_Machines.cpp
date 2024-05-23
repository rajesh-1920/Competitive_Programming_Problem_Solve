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
vector<ll> vec;
ll n, k;
bool good(ll x)
{
    ll s = 0;
    for (auto it : vec)
    {
        if (it > x)
            return false;
        s += (x / it);
        if (s >= k)
            return true;
    }
    return false;
}
void solve(void)
{
    cin >> n >> k;
    ll m = n, x, l = 0, r = 2e18;
    while (m--)
    {
        cin >> x;
        vec.pb(x);
    }
    sort(vec.begin(), vec.end());
    while (l + 1 < r)
    {
        m = (l + r) / 2;
        if (good(m))
            r = m;
        else
            l = m;
    }
    cout << r;
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
