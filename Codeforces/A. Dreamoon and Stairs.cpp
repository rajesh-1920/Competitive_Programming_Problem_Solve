// Author:  Rajesh Biswas
// Date  :  07.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "No\n";
#define yes cout << "Yes\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define nl cout << "\n";
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, t, res;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1;
        rrr
    }
    else if ((n / 2) % m == 0 && n % 2 == 0)
    {
        cout << n / 2;
        rrr
    }
    t = n % (2 * m);
    res = (n - t) / 2;
    cout << res + m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
