// Author:  Rajesh Biswas
// Date  :  03.03.2024

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
    ll n, i, mx = 0, j, x, t;
    cin >> n >> x;
    ll a[n + 1];
    a[0] = 0;
    j = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> t;
        a[i] = a[i - 1] + t;
        while (true)
        {
            if (i == j)
                break;
            if (a[i] - a[j] <= x)
            {
                t = i - j;
                mx = max(mx, t);
                break;
            }
            else
                j++;
        }
    }
    i = n;
    j = 0;
    while (true)
    {
        if (i == j)
            break;
        if (a[i] - a[j] <= x)
        {
            t = i - j;
            mx = max(mx, t);
            break;
        }
        else
            j++;
    }
    cout << mx;
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
/*
    for(auto &x:v)cin>>x;
*/
