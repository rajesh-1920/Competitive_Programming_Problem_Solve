// Author:  Rajesh Biswas
// Date  :  19.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
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
    ll n, i, fl = 1;
    cin >> n;
    ll a[n], b[n - 1], c[n - 2];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
        cin >> b[i];
    for (i = 0; i < n - 2; i++)
        cin >> c[i];
    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] != b[i])
        {
            cout << a[i];
            nl;
            fl = 0;
            break;
        }
    }
    if (fl)
    {
        cout << a[n - 1];
        nl;
    }
    fl = 1;
    for (i = 0; i < n - 2; i++)
    {
        if (c[i] != b[i])
        {
            cout << b[i];
            nl;
            fl = 0;
            break;
        }
    }
    if (fl)
    {
        cout << b[n - 2];
        nl;
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
        // cout << "Case " << T << " : ";
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
