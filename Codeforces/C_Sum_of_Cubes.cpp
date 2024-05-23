// Author:  Rajesh Biswas
// Date  :  05.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n, i, j, t, x, temp;
    cin >> n;
    for (i = 1;; i++)
    {
        t = i * i * i;
        if (t >= n)
        {
            NO;
            rrr;
        }
        x = n - t;
        temp = powl((double)x, (1.0 / 3.0));
        if (x == (temp * temp * temp))
        {
            YES;
            rrr;
        }
        temp++;
        if (x == (temp * temp * temp))
        {
            YES;
            rrr;
        }
        temp++;
        if (x == (temp * temp * temp))
        {
            YES;
            rrr;
        }
    }
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
