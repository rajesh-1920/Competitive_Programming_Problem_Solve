// Author:  Rajesh Biswas
// Date  :  17.11.2023

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
    ll n, mx = 0, i;
    cin >> n;
    ll a[n + 1], s[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        if (i == 0)
            s[i] = a[i];
        else
            s[i] = s[i - 1] + a[i];
    }
    for (i = 0; i < n; i++)
    {
    }
    cout << mx;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
