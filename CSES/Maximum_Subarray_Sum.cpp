// Author:  Rajesh Biswas
// Date  :  28.02.2024

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
    ll i, n, mx = 0, j, t1 = 0, t2 = 0, t3 = 0;
    cin >> n;
    ll a[n + 1] = {0};
    for (i = 1; i <= n; i++)
    {
        cin >> j;
        a[i] = a[i - 1] + j;
    }
    i = 0;
    j = 1;
    while (true)
    {
        if (i == n && j == 1)
        {
            cout << mx;
            rrr;
        }
        if (j < n)
            t1 = a[j + 1] - a[i];
        if (i < n)
            t2 = a[j] - a[i + 1];
        if (i < n && j < n)
            t3 = a[j + 1] - a[i + 1];
        if (t3 >= t1 && t3 >= t2)
        {
            mx = max(t3, mx);
            if (j < n)
                j++;
            if (i < n)
                i++;
        }
        else if (t2 >= t1 && t2 >= t3)
        {
            mx = max(t2, mx);
            if (i < n)
                i++;
        }
        else if (t1 >= t2 && t1 >= t3)
        {
            mx = max(t1, mx);
            if (j < n)
                j++;
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
