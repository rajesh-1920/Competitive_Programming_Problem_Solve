// Author:  Rajesh Biswas
// Date  :  26.03.2024

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

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
ll n, k;
vector<ll> v;
bool good(ll m)
{
    ll pos = -1, cnt = 0;
    for (auto it : v)
    {
        if (pos == -1 || (it - pos >= m))
        {
            cnt++;
            pos = it;
            if (cnt >= k)
                return true;
        }
    }
    return cnt >= k;
}
void solve()
{
    cin >> n >> k;
    ll x, l = -1, r = 0, i, m;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        r = max(r, x + 10);
    }
    sort(v.begin(), v.end());
    while (l + 1 < r)
    {
        m = (l + r) / 2;
        if (good(m))
            l = m;
        else
            r = m;
    }
    cout << l;
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
