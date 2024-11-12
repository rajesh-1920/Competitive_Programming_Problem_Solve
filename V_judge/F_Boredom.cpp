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
ll n, a[N];
map<pair<ll, ll>, ll> mp;
// map<ll, ll> cn;
ll ok(ll i, ll pr = -1)
{
    if (i == n)
        rrr 0;
    if (mp.find({i, pr}) != mp.end())
        rrr mp[{i, pr}];
    ll ans = ok(i + 1, pr);
    if (a[i] - 1 != pr)
        ans = max(ans, ok(i + 1, a[i]) + a[i]);
    rrr mp[{i, pr}] = ans;
}
void solve(void)
{
    cin >> n;
    f(i, 0, n)
    {
        cin >> a[i];
        // cn[a[i]]++;
    }
    sort(a, a + n);
    cout << ok(0);
    // f(i,0,12)cout<<dp[i+5]<<' ';
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
