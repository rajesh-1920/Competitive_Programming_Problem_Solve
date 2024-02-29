// Author:  Rajesh Biswas
// Date  :  25.11.2023

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
    ll n, m, x, s, i = 0;
    cin >> n;
    map<ll, ll> mp;
    map<ll, ll>::iterator it;
    while (n--)
    {
        cin >> x;
        if (i == 0)
            s = x;
        else
            s += x;
        mp[s] = i + 1;
        i++;
    }
    cin >> m;
    while (m--)
    {
        cin >> x;
        it = (mp.lower_bound(x));
        cout << it->sc;
        nl;
    }
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
