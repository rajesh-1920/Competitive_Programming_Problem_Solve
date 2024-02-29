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
bool cmp(pa a, pa b)
{
    if (a.fi == b.fi)
        return a.sc < b.sc;
    else
        return a.fi > b.fi;
}
void solve(void)
{
    ll n, k, i, x;
    cin >> n >> k;
    vecp a;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % k == 0)
            a.ppb(k, i);
        else
            a.ppb(x % k, i);
    }
    sort(a.begin(), a.end(), cmp);
    for (auto it : a)
        cout << it.sc << ' ';
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
