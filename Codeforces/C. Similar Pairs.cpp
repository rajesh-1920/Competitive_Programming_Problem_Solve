// Author:  Rajesh Biswas
// Date  :  30.11.2023

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
    ll n, od = 0, ev = 0, i;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            ev++;
        else
            od++;
    }
    if ((od % 2 == 0) && (ev % 2 == 0))
    {
        YES;
        rrr;
    }
    if (((od % 2 != 0) && (ev % 2 == 0)) || ((od % 2 == 0) && (ev % 2 != 0)))
    {
        NO;
        rrr;
    }
    sort(a, a + n);
    for (i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == 1)
        {
            YES;
            rrr;
        }
    }
    NO;
}
//--------------------------------------------------------------------------------------
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
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/