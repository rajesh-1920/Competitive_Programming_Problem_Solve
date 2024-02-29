// Author:  Rajesh Biswas
// Date  :  12.11.2023

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

#define no cout << "no\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define yes cout << "yes\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define nl cout << "\n"
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, cnt = 0, l = 1, r = 1, round = 0;
    cin >> n;
    ll a[n + 1];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i + 1] && round == 2)
        {
            no;
            rrr;
        }
        if (cnt > 0)
        {
            if (a[i] < a[i + 1] && round == 1)
            {
                r = i;
                round = 2;
            }
        }
        if (a[i] > a[i + 1])
        {
            round = 1;
            if (cnt == 0)
                l = i;
            cnt++;
        }
        if (cnt > 0 && round == 1 && i + 1 == n && a[n - 1] > a[n])
            r = n;
    }
    if (l != 1 && r != n)
    {
        if (a[l - 1] > a[r] || a[l] > a[r + 1])
        {
            no;
            rrr;
        }
    }
    else if (l != 1)
    {
        if (a[l - 1] > a[r])
        {
            no;
            rrr;
        }
    }
    else if (r != n)
    {
        if (a[l] > a[r + 1])
        {
            no;
            rrr;
        }
    }
    yes;
    cout << l << ' ' << r;
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
