// Author:  Rajesh Biswas
// Date  :  07.11.2023

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
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, j, cnt = 0;
    cin >> n;
    vec a(n, 3);
    map<ll, vec> mp;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        mp[j].pb(i);
    }
    for (auto it : mp)
    {
        if (it.sc.size() > 1 && cnt == 1)
        {
            cnt++;
            a[it.sc[0]] = 1;
            for (i = 1; i < it.sc.size(); i++)
                a[it.sc[i]] = 2;
        }
        if (it.sc.size() > 1 && cnt == 0)
        {
            cnt++;
            a[it.sc[0]] = 1;
        }
        if (cnt == 2)
            break;
    }
    if (cnt < 2)
    {
        cout << -1;
        nl;
        rrr;
    }
    for (auto it : a)
        cout << it << ' ';
    nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
