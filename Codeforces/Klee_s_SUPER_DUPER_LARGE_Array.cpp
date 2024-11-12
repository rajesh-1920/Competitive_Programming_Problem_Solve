// Author:  Rajesh Biswas
// Date  :  03.09.2024

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
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
ll sum(ll a, ll b)
{
    ll t1 = a * (a - 1) / 2;
    ll t2 = b * (b + 1) / 2;
    rrr t2 - t1;
}
void solve(void)
{
    ll n, k;
    cin >> n >> k;
    ll high = k + n - 1;
    ll low = k + 1;
    ll ans = 0;
    while (high - low > 1)
    {
        ll hi = high, lo = low;
        while (hi - lo > 1)
        {
            ll m = (hi + low) / 2;
            if (sum(low, m) <= high)
                lo = m;
            else
                hi = m;
        }
        if (sum(lo, low) <= high)
            ans += (high - (sum(lo, low)));
        // cout << high << ' ';
        high--;
        low = lo + 1;
    }
    cout << ans;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
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