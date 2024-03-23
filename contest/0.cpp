// Author:  Rajesh Biswas
// Date  :  22.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
vector<ll> a;
ll maxSubArraySum(ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
void solve()
{
    ll n, k, j, i, t = 0, MOD = 1000000007;
    cin >> n >> k;
    a.clear();
    for (i = 0; i < n; i++)
    {
        cin >> j;
        a.push_back(j);
        t += j;
    }
    ll mx = maxSubArraySum(n);
    k--;
    ll m = mx % MOD;
    while (k--)
    {
        mx = (mx % MOD + mx % MOD) % MOD;
        m = (m % MOD + mx % MOD) % MOD;
    }
    mx = m % MOD;
    if (mx < 0)
        mx = 0;
    if (t < 0 && ((t % MOD + mx % MOD) % MOD))
        cout << ((t % MOD + MOD+ mx % MOD) % MOD);
    else
        cout << ((t % MOD + mx % MOD) % MOD);
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
/*
    for(auto &x:v)cin>>x;
*/
