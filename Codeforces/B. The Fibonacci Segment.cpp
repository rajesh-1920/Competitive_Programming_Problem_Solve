// Author:  Rajesh Biswas
// Date  :  05.11.2023

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
    ll n, i, mx = 2, cnt = 2;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 2)
    {
        cout << n;
        nl;
        return;
    }
    for (i = 2; i < n; i++)
    {
        if (a[i] == (a[i - 1] + a[i - 2]))
            cnt++;
        else
            cnt = 2;
        mx = max(mx, cnt);
    }
    cout << mx;
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
