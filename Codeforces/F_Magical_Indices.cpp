// Author:  Rajesh Biswas
// Date  :  05.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (i = st; i < end; i++)
#define ft(i, st, end) for (i = st; i < end; i++)

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
    ll m = 0, n;
    cin >> n;
    ll a[n + 5], mx[n + 5], mn[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx[i] = m;
        m = max(m, a[i]);
    }
    ll ans = 0;
    m = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i < n - 1 && i > 0)
            if (mx[i] <= a[i] && m >= a[i])
                ans++;
        m = min(m, a[i]);
    }
    cout << ans;
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
