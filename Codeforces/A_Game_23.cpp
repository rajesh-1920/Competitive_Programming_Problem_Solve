// Author:  Rajesh Biswas
// Date  :  04.04.2024

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
ll st, fl = 1;
void cnt(ll tar, ll c)
{
    if (!fl)
        rrr;
    if (tar == st)
    {
        fl = 0;
        cout << c;
        rrr;
    }
    if (tar % 6 == 0 && tar / 6 >= st)
        cnt(tar / 6, c + 2);
    if (tar % 3 == 0 && tar / 3 >= st)
        cnt(tar / 3, c + 1);
    if (tar % 2 == 0 && tar / 2 >= st)
        cnt(tar / 2, c + 1);
}
void solve()
{
    ll tar;
    cin >> st >> tar;
    cnt(tar, 0);
    if (fl)
        cout << -1;
    nl;
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
