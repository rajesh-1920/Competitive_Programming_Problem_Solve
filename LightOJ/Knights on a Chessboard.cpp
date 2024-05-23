// Author:  Rajesh Biswas
// Date  :  24.02.2024

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
    ll n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << m;
        nl;
        rrr;
    }
    if (m == 1)
    {
        cout << n;
        nl;
        rrr;
    }
    if (n == 2)
    {
        ll t = m / 4;
        t = t * 4;
        if (m % 4 == 1)
            t += 2;
        else if (m % 4 >= 2)
            t += 4;
        cout << t;
        nl;
        rrr;
    }
    if (m == 2)
    {
        ll t = n / 4;
        t = t * 4;
        if (n % 4 == 1)
            t += 2;
        else if (n % 4 >= 2)
            t += 4;
        cout << t;
        nl;
        rrr;
    }
    ll x = n * m;
    ll res = x / 2;
    if (x % 2)
        res++;
    cout << res;
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
        cout << "Case " << T << ": ";
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
