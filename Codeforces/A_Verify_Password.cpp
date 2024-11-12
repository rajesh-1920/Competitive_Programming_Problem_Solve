// Author:  Rajesh Biswas
// Date  :  30.05.2024

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
    string s, c1, c2, d1, d2;
    int n, fl = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if (fl)
            {
                NO;
                rrr;
            }
            d1.push_back(s[i]);
            d2.push_back(s[i]);
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                NO;
                rrr;
            }
            fl = 1;
            c1.push_back(s[i]);
            c2.push_back(s[i]);
        }
    }
    sort(c1.begin(), c1.end());
    sort(d1.begin(), d1.end());
    if (c1 == c2 && d1 == d2)
        YES;
    else
        NO;
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
