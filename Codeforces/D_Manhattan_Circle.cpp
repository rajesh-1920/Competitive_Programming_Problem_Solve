// Author:  Rajesh Biswas
// Date  :  11.06.2024

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
    int n, m, x = 1, y = -1;
    cin >> n >> m;
    int l = m + 1;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        auto it = find(s.begin(), s.end(), '#');
        if (it != s.end())
        {
            int t = it - s.begin();
            if (y == -1)
                y = t + 1;
            if (t <= l)
            {
                l = t;
                x = i + 1;
            }
        }
    }
    cout << x << ' ' << y;
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
