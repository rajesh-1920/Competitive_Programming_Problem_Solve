// Author:  Rajesh Biswas
// Date  :  28.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
#define MOD ((1LL * 1e9) + 7)
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
void solve(void)
{
    ll n, k, i, j, x, y, cnt = 0;
    cin >> n >> k;
    vector<ll> v(n + 5, 0), a(n + 5, 0);
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        v[a[i]] = i;
    }
    x = 0;
    for (i = 1; i <= n; i++)
    {
        if (v[i] > x)
            cnt++;
        x = v[i];
    }
    while (k--)
    {
        cin >> x >> y;
        x = a[x];
        y = a[y];
        if (x > y)
            swap(x, y);
        if(x>v[])
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
