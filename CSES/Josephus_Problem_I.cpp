// Author:  Rajesh Biswas
// Date  :  01.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
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
void solve(void)
{
    ll n, i, j, fl = 1;
    cin >> n;
    vector<ll> a, b, x, y;
    j = n;
    if (j % 2)
        j--;
    for (i = 2;; i += 2)
    {
        if (fl)
        {
            if (i == j)
            {
                a.pb(i);
                break;
            }
            if (i > j)
                break;
            a.pb(i);
            b.pb(j);
            fl = 0;
        }
        else
        {
            if (i == j)
            {
                b.pb(i);
                break;
            }
            if (i > j)
                break;
            b.pb(i);
            a.pb(j);
            fl = 1;
        }
        j -= 2;
    }
    j = n;
    if (n % 2 == 0)
        j--;
    fl = 1;
    for (i = 1;; i += 2)
    {
        if (fl)
        {
            if (i == j)
            {
                x.pb(i);
                break;
            }
            if (i > j)
                break;
            x.pb(i);
            y.pb(j);
            fl = 0;
        }
        else
        {
            if (i == j)
            {
                b.pb(i);
                break;
            }
            if (i > j)
                break;
            y.pb(i);
            x.pb(j);
            fl = 1;
        }
        j -= 2;
    }
    reverse(b.begin(), b.end());
    reverse(y.begin(), y.end());
    for (auto it : a)
        cout << it << ' ';
    for (auto it : b)
        cout << it << ' ';
    for (auto it : x)
        cout << it << ' ';
    for (auto it : y)
        cout << it << ' ';
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
