// Author:  Rajesh Biswas
// Date  :  06.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (i = st; i < end; i++)
#define ft(i, st, end) for (i = st; i < end; i++)

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
    ll x, y, ans = 0;
    cin >> x >> y;
    if (y >= 2)
    {
        ans = (y) / 2;
        x = x - (ans * 7);
        if (y & 1)
        {
            ans++;
            x -= 11;
        }
        if (x > 0)
        {
            ans += x / 15;
            if (x % 15)
                ans++;
        }
    }
    else if (y > 0)
    {
        ans = 1;
        x -= 11;
        if (x > 0)
        {
            ans += x / 15;
            if (x % 15)
                ans++;
        }
    }
    else if (x > 0)
    {
        ans += x / 15;
        if (x % 15)
            ans++;
    }

    cout << ans;
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
