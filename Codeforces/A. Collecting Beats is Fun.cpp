// Author:  Rajesh Biswas
// Date  :  11.11.2023

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
    ll k, i, j, fl = 1;
    cin >> k;
    map<char, ll> mp;
    char x;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> x;
            mp[x]++;
            if (mp[x] > 2*k && x != '.')
                fl = 0;
        }
    }
    if (fl)
        YES;
    else
        NO;
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
