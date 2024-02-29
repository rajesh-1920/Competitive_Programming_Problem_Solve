// Author:  Rajesh Biswas
// Date  :  14.11.2023

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
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll i, j, a[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    a[0][0] = ((a[2][0] + a[0][2] + a[2][1] + a[2][0] - a[0][1] - a[0][2]) / 2);
    a[1][1] = a[0][0] + a[0][1] + a[0][2] - a[1][0] - a[1][2];
    a[2][2] = a[0][0] + a[0][1] + a[0][2] - a[2][0] - a[2][1];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << a[i][j] << ' ';
        nl;
    }
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
