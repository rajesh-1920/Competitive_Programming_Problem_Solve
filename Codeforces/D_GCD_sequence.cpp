// Author:  Rajesh Biswas
// Date  :  03.06.2024

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
    int n, fl = 0;
    cin >> n;
    int a[n + 10], b[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i < n && i > 1)
            b[i - 1] = __gcd(a[i], a[i - 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (b[i] > b[i + 1])
        {
            if (fl)
            {
                NO;
                rrr;
            }
            fl = 1;
        }
    }
    YES;
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
