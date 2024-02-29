// Author:  Rajesh Biswas
// Date  :  15.11.2023

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
    ll d, s, x, y, sx = 0, sy = 0, i;
    cin >> d >> s;
    vecp a;
    vec res(d, 0);
    for (i = 0; i < d; i++)
    {
        cin >> x >> y;
        sx += x;
        sy += y;
        a.ppb(x, y);
    }
    if (sx > s || sy < s)
    {
        NO;
        rrr;
    }
    for (i = 0; i < d; i++)
    {
        res[i] += a[i].fi;
        s -= a[i].fi;
    }
    for (i = 0; i < d; i++)
    {
        if (s <= 0)
            break;
        res[i] += min(s, (a[i].sc - a[i].fi));
        s -= min(s, (a[i].sc - a[i].fi));
    }
    YES;
    for (auto it : res)
        cout << it << ' ';
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
