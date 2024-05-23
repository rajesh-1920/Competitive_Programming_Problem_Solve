// Author:  Rajesh Biswas
// Date  :  17.05.2024

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
    int p1, p2, p3, fl = 0;
    cin >> p1 >> p2 >> p3;
    int cn = 0;
    if ((p1 == 0 && p2 == 0 && p3 % 2 == 0) || (p3 == 0 && p2 == 0 && p1 % 2 == 0) || (p1 == 0 && p3 == 0 && p2 % 2 == 0))
    {
        cout << cn;
        nl;
        rrr;
    }
    for (int i = 0; i <= 50; i++)
    {
        for (int j = 0; j <= 50; j++)
        {
            for (int k = 0; k <= 50; k++)
            {
                int t1 = p1 - i - j;
                int t2 = p2 - i - k;
                int t3 = p3 - k - j;
                if (t1 >= 0 && t2 >= 0 && t3 >= 0 && t1 % 2 == 0 && t2 % 2 == 0 && t3 % 2 == 0)
                {
                    cn = max(cn, i + j + k);
                    if (i || j || k)
                        fl = 1;
                }
            }
        }
    }
    if (fl)
        cout << cn;
    else
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
