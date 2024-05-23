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
    ll n, i, x, y, temp;
    vecp a, res;
    cin >> n;
    temp = n - 1;
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.ppb(x, y);
        res.ppb(temp, temp);
        mp[x]++;
    }
    for (i = 0; i < n; i++)
    {
        res[i].fi += mp[a[i].sc];
        res[i].sc -= mp[a[i].sc];
    }
    for (auto it : res)
        cout << it.fi << ' ' << it.sc << '\n';
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
