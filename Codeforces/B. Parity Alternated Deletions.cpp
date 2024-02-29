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
    ll n, x, sum = 0;
    vec od, ev, t;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x % 2 == 0)
            ev.pb(x);
        else
            od.pb(x);
    }
    if (ev.size() > od.size())
        swap(od, ev);
    if ((od.size() - ev.size()) <= 1)
    {
        cout << 0;
        nl;
        rrr;
    }
    srt(od);
    srt(ev);
    od.pop_back();
    while (ev.size() > 0)
    {
        od.pop_back();
        ev.pop_back();
    }
    for (auto it : od)
        sum += it;
    cout << sum;
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
