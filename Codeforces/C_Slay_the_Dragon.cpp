// Author:  Rajesh Biswas
// Date  :  20.08.2024

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
#define N 100009
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    scv(v, n);
    sort(all(v));
    ll total = accumulate(all(v), 0LL);
    cin >> n;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        auto it = upper_bound(all(v), x);
        ll ans = 0;
        if (it == v.end())
        {
            it--;
            ll t = *it;
            ans += max(0LL, (x - t));
            ans += max(0LL, (y - (total - t)));
        }
        else if (it == v.begin())
        {
            ll t = *it;
            ans += max(0LL, (x - t));
            ans += max(0LL, (y - (total - t)));
        }
        else
        {
            ll t = *it, mn = 0, m = 0;
            mn += max(0LL, (x - t));
            mn += max(0LL, (y - (total - t)));
            it--;
            t = *it;
            m += max(0LL, (x - t));
            m += max(0LL, (y - (total - t)));
            ans = min(m, mn);
        }
        cout << ans;
        nl;
    }
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