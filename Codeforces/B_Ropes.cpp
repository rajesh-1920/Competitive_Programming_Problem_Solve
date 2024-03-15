// Author:  Rajesh Biswas
// Date  :  16.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef double ll;
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
int n, k;
vector<ll> a(10000000);
bool good(ll x)
{
    int i, cnt = 0;
    for (i = 0; i < n; i++)
    {
        cnt += (int)(a[i] / x);
        if (cnt >= k)
            return true;
    }
    return false;
}
void solve()
{
    cin >> n >> k;
    ll l = 0, r = 0, m;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        r = max(r, a[i]);
    }
    r += 100;
    for (i = 0; i <=100; i++)
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
    cout << fixed << showpoint << setprecision(10);
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
