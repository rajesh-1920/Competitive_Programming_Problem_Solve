// Author:  Rajesh Biswas
// Date  :  20.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
#define MOD ((1LL * 1e9) + 7)
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
void solve(void)
{
    ll n, i = 0, j, mx = 0;
    cin >> n;
    ll a[n];
    unordered_map<ll, ll> mp, po;
    for (j = 0; j < n; j++)
    {
        cin >> a[j];
        mp[a[j]]++;
        if (mp[a[j]] == 2)
        {
            if (po[a[j]] > i)
                i = j;
        }
        po[a[j]] = j;
        mx = max(mx, j - i + 1);
        cout << a[j] << ' ' << ' ' << i << ' ' << j << '\n';
    }
    cout << mx;
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
/*
    for(auto &x:v)cin>>x;
*/
