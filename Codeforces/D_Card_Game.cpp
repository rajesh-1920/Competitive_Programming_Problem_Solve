// Author:  Rajesh Biswas
// Date  :  18.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, x;
    char ch, t2;
    cin >> n >> ch;
    vector<ll> s, c, d, h;
    map<pair<pair<ll, char>, pair<ll, char>>, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> x >> t2;
        if (x == 'C')
            c.pb(x);
        if (x == 'D')
            d.pb(x);
        if (x == 'H')
            h.pb(x);
        if (x == 'S')
            s.pb(x);
    }
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    sort(h.begin(), h.end());
    sort(d.begin(), d.end());
    if (ch == 'S')
    {
        if (c.size() > 1)
        {
            for (i = c.size() - 1; i >= 0; i -= 2)
                mp[{{c[i], 'C'}, {c[i - 1], 'C'}}]++;
        }
        if (d.size() > 1)
        {
            for (i = d.size() - 1; i >= 0; i -= 2)
                mp[{{d[i], 'D'}, {d[i - 1], 'D'}}]++;
        }
        if (h.size() > 1)
        {
            for (i = h.size() - 1; i >= 0; i -= 2)
                mp[{{h[i], 'H'}, {h[i - 1], 'H'}}]++;
        }
    }
    for (auto it : mp)
        cout << it.fi.fi.fi << it.fi.fi.sc << ' ' << it.fi.sc.fi << it.fi.sc.sc << '\n';
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
/*
    for(auto &x:v)cin>>x;
*/
