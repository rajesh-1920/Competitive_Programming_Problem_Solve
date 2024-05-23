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
    ll l, r, res;
    cin >> l >> r;
    if (l == r)
    {
        if (l % 2 != 0)
            r = -l;
    }
    else
    {
        if (l % 2 == 0 && r % 2 == 0)
            r += ((l - r) / 2);
        else if (l % 2 == 0 && r % 2 != 0)
            r = -1 * ((r - l + 1) / 2);
        else if (l % 2 != 0 && r % 2 == 0)
            r = ((r - l + 1) / 2);
        else if (l % 2 != 0 && r % 2 != 0)
            r = (((r - l) / 2) - r);
    }
    cout << r;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
        nl;
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/