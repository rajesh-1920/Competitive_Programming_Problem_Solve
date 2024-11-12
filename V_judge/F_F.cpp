// Author:  Rajesh Biswas
// Date  :  05.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000007
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
vector<ll> v;
void solve(void)
{
    ll n, m, evn = 0, odd = 0;
    cin >> n >> m;
    if (n > m)
        swap(m, n);
    ll total = (m - n + 1);
    if ((n - 1) % 3 == 0)
    {
        evn++;
        n++;
    }
    else if ((m - 1) % 3 == 0)
    {
        evn++;
        m--;
    }
    ll t = (m - n) + 1;
    evn += (t / 3);
    odd = total - evn;

    cout << "Odd = " << odd << '\n';
    cout << "Even = " << evn << '\n';
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
        cout << "Case " << T << ":\n";
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
