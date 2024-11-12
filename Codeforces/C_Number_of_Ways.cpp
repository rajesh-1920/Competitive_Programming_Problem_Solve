// Author:  Rajesh Biswas
// Date  :  17.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) cin >> (v[i]);
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
    vector<ll> a(n + 5), s;
    ll cnt = 0;
    forn(i, 0, n)
    {
        cin >> a[i];
        cnt += a[i];
        s.pb(cnt);
    }
    cnt = 0;
    for (ll i = 0; i + 1 < n; i++)
    {
        ll s1 = s[i];
        ll temp = s[n - 1] - s1;
        if (temp % 2 == 0)
        {
            ll s2 = temp / 2, tofind = (temp / 2) + s1;
            auto up = upper_bound(all(s), tofind);
            up--;
            if (up - s.begin() <= i)
                up++;
            if (*up == tofind)
            {
                auto lp = lower_bound(all(s), tofind);
                cnt += (up - lp) + 1;
            }
            //cout<<i<<' '<<cnt<<'\n';
        }
    }
    cout << cnt;
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