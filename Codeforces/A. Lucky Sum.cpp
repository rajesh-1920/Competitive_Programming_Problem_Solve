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
ll a[1000000] = {0};
ll res(ll p)
{
    ll sum = 0, i, l;
    for (i = 0;; i++)
    {
        if (a[i] >= p)
        {
            sum += a[i] * (p - l);
            break;
        }
        sum += a[i] * (a[i] - l);
        l = a[i];
    }
    return sum;
}
void solve(void)
{
    ll l, r, i, len = 3;
    cin >> l >> r;
    a[0] = 0;
    a[1] = 4;
    a[2] = 7;
    for (i = 1; a[i] <= 1e12; i++)
    {
        a[len++] = a[i] * 10 + 4;
        a[len++] = a[i] * 10 + 7;
    }
    cout << res(r) - res(l - 1);
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
