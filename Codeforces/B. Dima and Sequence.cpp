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
ll get_sum(ll x)
{
    if (x == 0)
        return 0;
    else if (x % 2 == 0)
        return get_sum(x / 2);
    else
        return get_sum((x - 1) / 2) + 1;
}
void solve(void)
{
    ll n, i, cnt = 0, temp, x;
    cin >> n;
    map<ll, ll> m;
    while (n--)
    {
        cin >> x;
        temp = get_sum(x);
        m[temp]++;
    }
    for (auto it : m)
    {
        n = it.sc;
        if (n > 1)
            cnt += (n * (n - 1) / 2);
    }
    cout << cnt;
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
