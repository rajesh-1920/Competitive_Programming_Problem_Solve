// Author:  Rajesh Biswas
// Date  :  05.04.2024

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
    ll i, j = 0;
    string s, t, res;
    cin >> s >> t;
    ll ls = s.size(), lt = t.size();
    ll lc = (ls * lt) / (__gcd(ls, lt));
    for (i = 0; i < lc; i++)
    {
        j = j % s.size();
        res.push_back(s[j]);
        j++;
    }
    j = 0;
    for (i = 0; i < lc; i++)
    {
        j %= t.size();
        if (res[i] != t[j])
        {
            mm;
            rrr;
        }
        j++;
    }
    cout << res;
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
