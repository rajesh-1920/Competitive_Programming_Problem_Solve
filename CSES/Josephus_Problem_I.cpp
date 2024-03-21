// Author:  Rajesh Biswas
// Date  :  01.03.2024

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
    ll n, i, j, fl = 1;
    cin >> n;
    for (i = 2; i <= n; i += 2)
        cout << i << ' ';
    vector<ll> v;
    if (n & 1)
    {
        for (i = 1; i <= n; i += 4)
            cout << i << ' ';
        for (i = 3; i <= n; i += 4)
            v.pb(i);
        if (n % 4 == 1)
            reverse(v.begin(), v.end());
        for (auto it : v)
            cout << it << ' ';
    }
    else
    {
        for (i = 3; i <= n; i += 4)
            cout << i << ' ';
        if (n % 4 == 2)
        {
            cout << 1 << ' ';
            for (i = 5; i <= n; i += 4)
                v.pb(i);
            reverse(v.begin(), v.end());
        }
        else
        {
            for (i = 1; i <= n; i += 4)
                v.pb(i);
            reverse(v.begin(), v.end());
        }
        for (auto it : v)
            cout << it << ' ';
    }
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
