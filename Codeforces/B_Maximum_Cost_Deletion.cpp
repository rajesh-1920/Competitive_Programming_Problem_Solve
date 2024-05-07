// Author:  Rajesh Biswas
// Date  :  07.05.2024

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
void solve()
{
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    if (b >= 0)
    {
        cout << (n * (a + b));
        nl;
        rrr;
    }
    int cnt = 1;
    char ch = s.back();
    s.push_back(ch);
    for (int i = 0; i < n; i++)
        if (s[i] != s[i + 1])
            cnt++;
    cout << (n * a + b * (cnt / 2 + 1));
    nl;
    /// t = unique(s.begin(), s.end())-s.begin();
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
