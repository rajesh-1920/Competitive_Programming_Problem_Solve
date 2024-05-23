// Author:  Rajesh Biswas
// Date  :  06.11.2023

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

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll x, y, x1, x2, y1, y2;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        y2 = x1 = 0;
        y1 = x2 = x + y;
    }
    else if (x < 0 && y < 0)
    {
        x2 = y1 = 0;
        y2 = x1 = x + y;
    }
    else if (x > 0 && y < 0)
    {
        x1 = 0;
        x2 = x - y;
        y1 = -x2;
        y2 = 0;
    }
    else if (x < 0 && y > 0)
    {
        x1 = -(-(x) + y);
        y1 = 0;
        x2 = 0;
        y2 = -x1;
    }
    cout << x1 << ' ' << y1 << " " << x2 << ' ' << y2;
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
