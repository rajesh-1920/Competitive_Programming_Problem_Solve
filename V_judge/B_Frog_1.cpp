// Author:  Rajesh Biswas
// Date  :  25.08.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define rrr return
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 100009
//------------------------------------------------------------------------------------
ll n, dp[N];
vector<ll> v(N);
ll ok(ll i)
{
    if (i == 1)
        rrr 0;
    if (dp[i] >= 0)
        rrr dp[i];
    ll ans = LLONG_MAX;
    if (i > 2)
        ans = min(ans, ok(i - 2) + abs(v[i] - v[i - 2]));
    ans = min(ans, ok(i - 1) + abs(v[i] - v[i - 1]));
    rrr dp[i] = ans;
}
void solve(void)
{
    cin >> n;
    f(i, 1, n + 1)
    {
        cin >> v[i];
        dp[i] = -1;
    }
    cout << ok(n);
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
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