// Author:  Rajesh Biswas
// Date  :  02.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, i, mx, mn;
    cin >> n;
    vector<ll> a(n), t(n);
    multiset<ll> s;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        t[i] = a[i];
    }
    sort(t.begin(), t.end());
    for (i = 0; i < n; i++)
    {
        if (a[i] == t[0])
        {
            mn = 1LL * abs(a[i] - t[1]);
            mx = 1LL * abs(a[i] - t[n - 1]);
        }
        else if (a[i] == t[n - 1])
        {
            mx = 1LL * abs(a[i] - t[0]);
            mn = 1LL * abs(a[i] - t[n - 2]);
        }
        else
        {
            mx = 1LL * abs(a[i] - t[0]);
            mx = max(mx, 1LL * abs(a[i] - t[n - 1]));
            auto it = lower_bound(t.begin(), t.end(), a[i]);
            it--;
            mn = 1LL * abs(a[i] - (*it));
            it++;
            it++;
            mn = min(mn, 1LL * abs(a[i] - (*it)));
        }
        cout << mn << ' ' << mx;
        nl;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
/*
    for(auto &x:v)cin>>x;
*/
