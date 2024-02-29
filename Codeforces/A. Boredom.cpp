// Author:  Rajesh Biswas
// Date  :  20.11.2023

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
    ll n, i, res = 0;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a + n);
    for (i = n - 1; i >= 0; i--)
    {
        if ((mp[a[i]] * a[i]) >= (mp[a[i] - 1] * (a[i] - 1)))
        {
            if (mp[a[i]] > 0)
            {
                res += a[i];
                mp.erase(a[i] - 1);
            }
        }
        else if (((mp[a[i]] * a[i]) + (mp[a[i] - 2] * (a[i] - 2))) >= (mp[a[i] - 1] * (a[i] - 1)))
        {
            if (mp[a[i]] > 0)
            {
                res += a[i];
                mp.erase(a[i] - 1);
            }
        }
        else if (((mp[a[i]] * a[i]) + (mp[a[i] - 2] * (a[i] - 2))) < (mp[a[i] - 1] * (a[i] - 1)))
        {
            if (mp[a[i] - 1] > 0)
            {
                //res += a[i] - 1;
                mp.erase(a[i]);
                mp.erase(a[i] - 2);
            }
        }
    }
    cout << res;
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
