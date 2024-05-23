// Author:  Rajesh Biswas
// Date  :  19.11.2023

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
bool cmp(pa a, pa b)
{
    if (a.fi < b.fi)
        return true;
    else if (a.fi > b.fi)
        return false;
    else
        return (a.sc < b.sc);
}
void solve(void)
{
    ll x, y, a, b, i, j;
    vecp res;
    cin >> x >> y >> a >> b;
    for (i = a; i <= x; i++)
    {
        for (j = b; j <= y; j++)
        {
            if (i <= j)
                break;
            res.ppb(i, j);
        }
    }
    sort(res.begin(), res.end(), cmp);
    cout << res.size() << '\n';
    for (auto it : res)
        cout << it.fi << ' ' << it.sc << '\n';
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
