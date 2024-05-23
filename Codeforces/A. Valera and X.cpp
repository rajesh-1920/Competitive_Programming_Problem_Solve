// Author:  Rajesh Biswas
// Date  :  18.11.2023

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
    ll n, i, j;
    cin >> n;
    string s[n];
    map<char, ll> mp, t;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        for (j = 0; j < n; j++)
            mp[s[i][j]]++;
    }
    for (i = 0; i < n; i++)
    {
        t[s[i][i]]++;
        j = ab(i, n - 1);
        if (i != j)
            t[s[i][j]]++;
    }
    if (mp.size() != 2 || t[s[0][0]] != (2 * n) - 1 || mp[s[0][0]] != t[s[0][0]])
    {
        NO;
        rrr;
    }
    YES;
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
