// Author:  Rajesh Biswas
// Date  :  17.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 100009
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
ll n, orr[N];
bool pre(int k)
{
    for (int i = 2; i <= n - k + 1; i++)
    {
        ll xr = (orr[i + k - 1] & (~(orr[i - 1])));
        if (xr != orr[k])
            return false;
    }
    return true;
}
void solve()
{
    cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        orr[i] = orr[i - 1] | x[i];
    }
    int l = 1;
    while (true)
    {
        if (pre(l))
        {
            cout << l;
            nl;
            rrr;
        }
        l++;
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
