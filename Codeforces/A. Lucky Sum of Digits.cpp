// Author:  Rajesh Biswas
// Date  :  06.11.2023

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
    ll n, i, t, fl = 0;
    vec a;
    cin >> n;
    t = n;
    while (n > 0)
    {
        if (n % 7 == 0)
        {
            fl = 1;
            for (i = 0; i < (n / 7); i++)
                a.pb(7);
            break;
        }
        if (n >= 28)
        {
            n -= 7;
            a.pb(7);
        }
        else
        {
            n -= 4;
            a.pb(4);
        }
        if (n == 0)
            fl = 1;
    }
    n = t;
    if (fl == 0)
    {
        a.clear();
        while (n > 0)
        {
            if (n % 7 == 0)
            {
                fl = 1;
                for (i = 0; i < (n / 7); i++)
                    a.pb(7);
                break;
            }
            if (n % 4 == 0)
            {
                fl = 1;
                for (i = 0; i < (n / 4); i++)
                    a.pb(4);
                break;
            }
            a.pb(7);
            n -= 7;
        }
    }
    n = t;
    if (fl == 0)
    {
        a.clear();
        while (n > 0)
        {
            if (n % 7 == 0)
            {
                fl = 1;
                for (i = 0; i < (n / 7); i++)
                    a.pb(7);
                break;
            }
            if (n % 4 == 0)
            {
                fl = 1;
                for (i = 0; i < (n / 4); i++)
                    a.pb(4);
                break;
            }
            a.pb(4);
            n -= 4;
        }
    }
    if (fl == 0)
    {
        cout << -1 << '\n';
        return;
    }
    srt(a);
    for (auto it : a)
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
