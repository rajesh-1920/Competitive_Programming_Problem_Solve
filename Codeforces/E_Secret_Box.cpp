// Author:  Rajesh Biswas
// Date  :  11.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
void solve()
{
    ll k, a[3], mx = 0;
    cin >> a[0] >> a[1] >> a[2] >> k;
    sort(a, a + 3);
    for (ll i = a[0]; i >= 1; i--)
    {
        for (ll j = a[1]; j >= 1; j--)
        {
            ll z = (k / (i * j));
            if (k == (i * j * z) && z <= a[2])
            {
                ll t1 = a[0] - i + 1;
                ll t2 = a[1] - j + 1;
                ll t3 = a[2] - z + 1;
                mx = max(mx, (t1 * t2 * t3));
            }
        }
    }
    cout << mx;
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
