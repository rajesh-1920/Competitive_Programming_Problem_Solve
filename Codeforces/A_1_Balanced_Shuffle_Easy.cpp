// Author:  Rajesh Biswas
// Date  :  06.05.2024

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
int fl = 0;
void res(string &s, int l, int r, ll c)
{
    if (fl)
        rrr;
    if (l == c && r == c)
    {
        cout << s << '\n';
        fl = 1;
        rrr;
    }
    if (l < c)
    {
        s.push_back('(');
        res(s, l + 1, r, c);
        s.pop_back();
    }
    if (l > r && r < c)
    {
        s.push_back(')');
        res(s, l, r + 1, c);
        s.pop_back();
    }
}
void solve()
{
    string s;
    cin >> s;
    int i, c = 0;
    for (i = 0; i < s.size(); i++)
        c += (s[i] == '(');
    string t = "";
    res(t, 0, 0, c);
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
