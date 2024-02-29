// Author:  Rajesh Biswas
// Date  :  12.11.2023

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
    ll res = 0, i, k, x, mx = 0;
    string s;
    map<char, ll> mp;
    cin >> s >> k;
    for (i = 0; i < 26; i++)
    {
        cin >> x;
        mp['a' + i] = x;
        mx = max(mx, x);
    }
    for (i = 1; i <= s.length(); i++)
        res += (mp[s[i - 1]] * i);
    for (i = s.length() + 1; i <= s.length() + k; i++)
        res += (i * mx);
    cout << res;
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
