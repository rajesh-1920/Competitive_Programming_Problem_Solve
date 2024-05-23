// Author:  Rajesh Biswas
// Date  :  26.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
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
    ll n, k, i, mx = 0;
    cin >> n >> k;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    if (k == 0)
    {
        for (i = 0; i < n; i++)
            cout << a[i] << ' ';
        rrr;
    }
    ll t = mx;
    ll b[n];
    mx = 0;
    for (i = 0; i < n; i++)
    {
        b[i] = t - a[i];
        mx = max(mx, b[i]);
    }
    for (i = 0; i < n; i++)
        a[i] = mx - b[i];
    if (k % 2)
        for (i = 0; i < n; i++)
            cout << b[i] << ' ';
    else
        for (i = 0; i < n; i++)
            cout << a[i] << ' ';
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    //cin >> test;
    for (T = 1; T <= test; T++)
    {
        //cout << "Case " << T << ": ";
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
