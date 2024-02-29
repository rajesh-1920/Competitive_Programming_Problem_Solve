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
void solve(void)
{
    ll n, i, x;
    cin >> n;
    vecp a;
    map<ll, ll> mp;
    for (i = 1; i <= 2 * n; i++)
    {
        cin >> x;
        mp[x]++;
        a.ppb(x, i);
    }
    for (auto it : mp)
    {
        if ((it.sc) % 2 != 0)
        {
            cout << -1;
            nl;
            rrr;
        }
    }
    srt(a);
    i = 0;
    for (auto it : a)
    {
        cout << it.sc << ' ';
        if (i % 2 != 0)
            nl;
        i++;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
