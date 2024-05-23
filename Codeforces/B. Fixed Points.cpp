// Author:  Rajesh Biswas
// Date  :  16.11.2023

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
    ll n, i, cnt = 0;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == i)
            cnt++;
    }
    if (cnt == n - 2 || cnt == n)
    {
        cout << n;
        nl;
        rrr;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] != i)
            {
                if (a[a[i]] == i)
                {
                    cout << cnt + 2;
                    nl;
                    rrr;
                }
            }
        }
    }
    cout << cnt + 1;
    nl;
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
