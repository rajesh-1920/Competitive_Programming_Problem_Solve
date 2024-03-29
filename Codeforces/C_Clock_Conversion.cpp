// Author:  Rajesh Biswas
// Date  :  28.03.2024

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
    ll i, j;
    char ch;
    cin >> i >> ch >> j;
    if (i < 12)
    {
        if (i == 0)
            i = 12;
        if (i < 10)
            cout << 0 << i << ch;
        else
            cout << i << ch;
        if (j < 10)
            cout << 0 << j << " AM";
        else
            cout << j << " AM";
        nl;
    }
    else
    {
        i = i % 12;
        if (i == 0)
            i = 12;
        if (i < 10)
            cout << 0 << i << ch;
        else
            cout << i << ch;
        if (j < 10)
            cout << 0 << j << " PM";
        else
            cout << j << " PM";
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
