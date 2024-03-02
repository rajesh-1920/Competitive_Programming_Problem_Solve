// Author:  Rajesh Biswas
// Date  :  02.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
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
    ll n, cnt, mn = 100000000000000000, i, j, k, l, temp, t;
    cin >> n;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 5; k++)
                for (l = 0; l < 3; l++)
                {
                    temp = n - (i * 1) - (j * 3) - (k * 6) - (l * 10);
                    if (temp % 15 == 0 && temp >= 0)
                    {
                        t = temp / 15;
                        mn = min(mn, (t + i + j + k + l));
                    }
                }
    cout << mn;
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
/*
    for(auto &x:v)cin>>x;
*/
