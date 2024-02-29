// Author:  Rajesh Biswas
// Date  :  08.11.2023

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
    ll n, i, mx = 0, cnt = 0;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            cnt++;
        else
            cnt = 0;
        mx = max(mx, cnt);
    }
    cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
            cnt++;
        else
            break;
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
            cnt++;
        else
            break;
    }
    cout << max(mx, cnt);
    nl;
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
