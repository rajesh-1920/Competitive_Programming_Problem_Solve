// Author:  Rajesh Biswas
// Date  :  05.11.2023

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
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, x;
    cin >> n;
    vec z, m, p;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            z.pb(x);
        else if (x < 0 && (m.size() < 3))
            m.pb(x);
        else if (x > 0)
            p.pb(x);
        else
            z.pb(x);
    }
    if (m.size() == 3)
    {
        if (p.size() == 0)
        {
            p.pb(m[2]);
            p.pb(m[1]);
            m.pop_back();
            m.pop_back();
        }
    }
    if (m.size() == 2)
    {
        z.pb(m[1]);
        m.pop_back();
    }
    cout << m.size() << ' ';
    for (auto it : m)
        cout << it << ' ';
    nl;
    cout << p.size() << ' ';
    for (auto it : p)
        cout << it << ' ';
    nl;
    cout << z.size() << ' ';
    for (auto it : z)
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
