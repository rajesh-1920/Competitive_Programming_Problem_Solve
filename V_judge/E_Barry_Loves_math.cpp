// Author:  Rajesh Biswas
// Date  :  24.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000007
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
void solve(void)
{
    ll n;
    cin >> n;
    ll m = n, r1 = 1, fl = 1;
    for (ll i = 2; i <= 1000000; i++)
    {
        if (n % i == 0)
        {
            // ll l = (i * (n - i)) / (__gcd(i, (n - i)));
            // if (l < m)
            // {
            //     m = l;
            r1 = i;
            fl = 0;
            break;
            // }
            // cout << l << ' ' << i << '\n';
        }
    }
    if (fl)
        r1 = n;
    cout << n / r1 << ' ' << n - n / r1 << '\n';
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
