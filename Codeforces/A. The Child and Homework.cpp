// Author:  Rajesh Biswas
// Date  :  09.11.2023

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
    string a;
    vector<pair<ll, char>> s;
    for (ll i = 0; i < 4; i++)
    {
        cin >> a;
        s.ppb(a.length() - 2, ('A' + i));
    }
    srt(s);
    if ((2 * s[0].fi <= s[1].fi) && (s[3].fi >= 2 * s[2].fi))
        cout << 'C';
    else if (2 * s[0].fi <= s[1].fi)
        cout << s[0].sc;
    else if (s[3].fi >= 2 * s[2].fi)
        cout << s[3].sc;
    else
        cout << 'C';
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
