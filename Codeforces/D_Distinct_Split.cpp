// Author:  Rajesh Biswas
// Date  :  05.05.2024

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
    ll n, mx = 0, i;
    string s;
    cin >> n >> s;
    ll a[n + 1] = {0}, b[n + 2] = {0};
    map<char, ll> mp;
    for (i = 1; i <= n; i++)
    {
        mp[s[i - 1]]++;
        a[i] = mp.size();
    }
    mp.clear();
    for (i = n; i > 0; i--)
    {
        mp[s[i - 1]]++;
        b[i] = mp.size();
    }
    for (i = 1; i <= n; i++)
        mx = max(mx, (a[i] + b[i + 1]));
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
