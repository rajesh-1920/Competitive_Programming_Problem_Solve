// Author:  Rajesh Biswas
// Date  :  04.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
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
    ll n, m, s1, s2, rr = 5;
    cin >> n >> m;
    cin >> s1 >> s2;
    ll l = 1, r = m, mid;
    while (l + 1 < r)
    {
        mid = ((l + r) / 2);
        if (((s1 - (mid - 1)) + (s2 - (mid - 1)) - 1 == n - 2))
        {
            cout << s1 - mid + 2 << " " << mid;
            nl;
            rrr;
        }
        else if (((s1 - (mid - 1)) + (s2 - (mid - 1)) - 1 <= n - 2))
            r = mid;
        else
            l = mid;
    }
    for (rr = l - 1000; rr <= r + 1000; rr++)
        if (((s1 - (rr - 1)) + (s2 - (rr - 1)) - 1 == n - 2))
        {
            cout << s1 - rr + 2 << " " << rr;
            nl;
            rrr;
        }
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
