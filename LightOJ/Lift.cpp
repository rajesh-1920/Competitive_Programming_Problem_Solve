// Author:  Rajesh Biswas
// Date  :  03.03.2024

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
#define no cout << "no\n"
#define yes cout << "yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll p, e, s = 19;
    cin >> p >> e;
    if (e >= p)
        s += (4 * e);
    else
    {
        s += (4 * p);
        p = 1LL * (abs(p - e));
        s += (4 * p);
    }
    cout << s;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(2);
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
