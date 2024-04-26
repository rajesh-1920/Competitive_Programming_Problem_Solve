// Author:  Rajesh Biswas
// Date  :  26.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 200
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
ll n, x, a[N], fl = 0;
void res(ll r, ll i)
{
    if (i > n)
    {
        if (r == x)
            fl = 1;
        rrr;
    }
    res(r + a[i], i + 1);
    res(r - a[i], i + 1);
}
void solve()
{
    cin >> n >> x;
    ll i;
    for (i = 1; i <=n; i++)
        cin >> a[i];
    res(0, 0);
    if (fl)
        YES;
    else
        NO;
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
