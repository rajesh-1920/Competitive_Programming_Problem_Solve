// Author:  Rajesh Biswas
// Date  :  03.03.2024

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
#define sn 3000000 + 100
//------------------------------------------------------------------------------------
map<ll, ll> mp;
ll dp[sn];
ll f(ll n)
{
    if (n <= 0)
        return 0;
    if (dp[n] >= 0)
        return dp[n];
    return dp[n] = (max(f(n - 1), (f(n - 2) + (mp[n] * n))));
}
void solve(void)
{
    ll n, i, res = 0, x = 0;
    for (i = 0; i < sn; i++)
        dp[i] = -1;
    mp.clear();
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        x = max(x, a[i]);
    }
    /*while (true)
    {
        if (a.size() == 0)
        {
            cout << res;
            nl;
            rrr;
        }
        x = *(--a.end());
        if (mp[x - 1] * (x - 1) > ((mp[x] * x) + (mp[x - 2] * (x - 2))) && x > 1 && mp[x - 1] > 0)
        {
            res += (mp[x - 1] * (x - 1));
            mp.erase(x - 2);
            mp.erase(x);
            mp[x - 1]--;
            if (mp[x - 1] == 0)
                mp.erase(x - 1);
            a.insert(x - 1);
            a.insert(x - 2);
            a.erase(x - 1);
            a.erase(x - 2);
            a.erase(x);
        }
        else // if (mp[x - 1] * (x - 1) > ((mp[x] * x) + (mp[x - 2] * (x - 2))))
        {
            res += (mp[x] * x);
            mp.erase(x - 1);
            mp[x]--;
            if (mp[x] == 0)
                mp.erase(x);
            a.erase(x);
            a.erase(x - 1);
        }
        // cout << res << ' ';
    }*/
    res = f(x);
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
