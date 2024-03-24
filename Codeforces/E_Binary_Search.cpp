// Author:  Rajesh Biswas
// Date  :  24.03.2024

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
void solve()
{
    ll n, i, x, j, m, t1 = 0;
    cin >> n >> x;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
            t1 = i;
    }
    i = 0;
    j = n;
    while (i + 1 < j)
    {
        m = (i + j) / 2;
        if (a[m] <= x)
            i = m;
        else
            j = m;
    }
    if (a[i] == x)
        cout << 0;
    else
    {
        cout << 1;
        nl;
        cout << t1 + 1 << ' ' << i + 1;
    }
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
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
