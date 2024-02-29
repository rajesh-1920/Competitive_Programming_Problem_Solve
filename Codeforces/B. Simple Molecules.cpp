// Author:  Rajesh Biswas
// Date  :  15.11.2023

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

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll x, y, z, rx, ry, rz;
    cin >> x >> y >> z;
    rx = (x + y - z) / 2;
    ry = (-x + y + z) / 2;
    rz = (x - y + z) / 2;
    if (rx < 0 || ry < 0 || rz < 0 || (x + y + z) % 2 != 0)
        cout << "Impossible";
    else
        cout << rx << ' ' << ry << ' ' << rz;
    nl;
}
//------------------------------------------------------------------------------------
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
