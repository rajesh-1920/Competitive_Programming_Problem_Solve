// Author:  Rajesh Biswas
// Date  :  19.03.2024

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

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll a, b, c, t;
    cin >> a >> b >> c;
    if (b % 3 == 0)
    {
        t = c / 3;
        if (c % 3)
            t++;
        t += a;
        t += (b / 3);
        cout << t;
        nl;
    }
    else
    {
        t = b % 3;
        b /= 3;
        a += b;
        if ((t == 1 && c <= 1) || (t == 2 && c == 0))
        {
            mm;
            rrr;
        }
        t += c;
        b = t / 3;
        if (t % 3)
            b++;
        cout << a + b;
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
