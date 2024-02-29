// Author:  Rajesh Biswas
// Date  :  09.11.2023

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
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll _n, p = 0, i, x, mx = 0;
    cin >> _n;
    ll a[3] = {0};
    for (i = 0; i < _n; i++)
    {
        cin >> x;
        a[i % 3] += x;
        if (a[i % 3] > mx)
        {
            mx = a[i % 3];
            p = i % 3;
        }
    }
    if (p == 0)
        cout << "chest\n";
    else if (p == 1)
        cout << "biceps\n";
    else if (p == 2)
        cout << "back\n";
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
