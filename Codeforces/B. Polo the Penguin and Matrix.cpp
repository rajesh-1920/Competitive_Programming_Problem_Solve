// Author:  Rajesh Biswas
// Date  :  20.11.2023

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
ll ab(ll x, ll y)
{
    return (1l * abs((double)x - (double)y));
}
void solve(void)
{
    ll n, m, d, i, mn = 1e12, cnt, x;
    cin >> n >> m >> d;
    ll a[n * m];
    map<ll, ll> mp;
    for (i = 0; i < n * m; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto it : mp)
    {
        cnt = 0;
        for (i = 0; i < n * m; i++)
        {
            x = ab(a[i], (it.fi));
            if (x % d == 0)
                cnt += (x / d);
            else
            {
                cout << -1;
                nl;
                rrr;
            }
        }
        mn = min(cnt, mn);
    }
    cout << mn;
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
