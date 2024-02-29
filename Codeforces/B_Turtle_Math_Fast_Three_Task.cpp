// Author:  Rajesh Biswas
// Date  :  27.02.2024

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
void solve(void)
{
    ll n, sum = 0, c1 = 0, c2 = 0, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        sum += x;
        if (x % 3 == 1)
            c1++;
        else if (x % 3 == 2)
            c2++;
    }
    if (sum % 3 == 0)
    {
        cout << 0;
        nl;
        rrr;
    }
    if (sum % 3 == 1)
    {
        if (c1 > 0)
            cout << 1;
        else if (c2 > 1)
        {
            cout << 2;
        }
        nl;
    }
    else
    {
        cout << 1;
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
