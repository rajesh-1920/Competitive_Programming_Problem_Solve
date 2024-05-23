// Author:  Rajesh Biswas
// Date  :  17.11.2023

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
    ll n, mx = 0, mn = 1e15, i, res, j;
    cin >> n;
    ll a[n], s[n];
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
        if (i == 0)
            s[i] = a[i];
        else
            s[i] = s[i - 1] + a[i];
    }
    res = mx - mn;
    for (j = 2; j <= n / 2; j++)
    {
        if (n % j == 0)
        {
            mp.clear();
            for (i = j; i <= n; i += j)
            {
                if (i == j)
                    mn = s[i - 1];
                else
                    mn = s[i - 1] - s[i - j - 1];
                if (mp.size() >= 1)
                {
                    auto it = mp.begin();
                    ll temp = 1l * (abs((double)(it->fi) - (double)mn));
                    res = max(res, temp);
                    it = --mp.end();
                    temp = 1l * (abs((double)(it->fi) - (double)mn));
                    res = max(res, temp);
                }
                mp[mn]++;
            }
        }
    }
    cout << res;
    nl;
}
//------------------------------------------------------------------------------------
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
