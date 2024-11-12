// Author:  Rajesh Biswas
// Date  :  06.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
string binp(int n)
{
    string s;
    while (n > 0)
    {
        if (n & 1)
            s.pb('1');
        else
            s.pb('0');
        n >>= 1;
    }
    return s;
}
void solve()
{
    ll x, y;
    cin >> x >> y;

    string sx = binp(x);
    string sy = binp(y);
    while (sx.size() > sy.size())
        sy.pb('0');
    while (sx.size() < sy.size())
        sx.pb('0');
    // reverse(sx.begin(), sx.end());
    // reverse(sy.begin(), sy.end());
    // cout << sx << '\n';
    // cout << sy << '\n';
    int t = 1;
    for (int i = 0; i < sx.size(); i++)
    {
        if (sx[i] == sy[i])
            t = t * 2;
        else
            break;
    }
    cout << t;
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
