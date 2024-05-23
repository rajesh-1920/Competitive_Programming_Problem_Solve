// Author:  Rajesh Biswas
// Date  :  23.02.2024

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
    ll n, i, x = 0, y, t, temp;
    cin >> n;
    t = 1LL * (sqrt(n));
    if (t * t == n)
    {
        if (t & 1)
            cout << 1 << ' ' << t;
        else
            cout << t << ' ' << 1;
        nl;
        rrr;
    }
    if (t & 1)
    {
        temp = n - (t * t);
        if (temp <= t + 1)
        {
            y = t + 1;
            x = temp;
        }
        else
        {
            y = (t + 1) * (t + 1) - n + 1;
            x = t + 1;
        }
    }
    else
    {
        temp = n - (t * t);
        if (temp <= t + 1)
        {
            x = t + 1;
            y = temp;
        }
        else
        {
            x = (t + 1) * (t + 1) - n + 1;
            y = t + 1;
        }
    }
    cout << x << ' ' << y;
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
