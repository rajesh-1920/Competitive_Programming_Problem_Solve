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
    string s;
    cin >> s;
    ll i, ev = 0, od = 0, cnt = 0;
    char c = s[s.size() - 1];
    for (i = 0; i < s.length(); i++)
    {
        if ((s[i] - '0') % 2 == 0)
            ev++;
        else
            od++;
    }
    if (ev == 0)
    {
        cout << -1 << '\n';
        rrr;
    }
    for (i = 0; i < s.length() - 1; i++)
    {
        if (((s[i] - '0') % 2 == 0) && ev == 1 && cnt == 0)
        {
            swap(c, s[i]);
            cnt++;
        }
        else if (s[i] < c && ((s[i] - '0') % 2 == 0) && ev > 1 && cnt == 0)
        {
            swap(c, s[i]);
            cnt++;
        }
    }
    if ((c - '0') % 2 != 0)
    {
        for (i = s.size() - 2; i >= 0; i--)
        {
            if ((s[i] - '0') % 2 == 0)
                swap(c, s[i]);
            break;
        }
    }
    s[s.size() - 1] = c;
    for (auto it : s)
        cout << it;
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
