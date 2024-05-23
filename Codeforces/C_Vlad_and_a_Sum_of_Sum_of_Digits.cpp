// Author:  Rajesh Biswas
// Date  :  21.02.2024

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
ll N = 2 * 10e5 + 50;
//------------------------------------------------------------------------------------
ll sum(ll n)
{
    ll s = 0;
    while (n > 0)
    {
        s += (n % 10);
        n /= 10;
    }
    return s;
}
vector<ll> a;
void solve(void)
{
    ll n;
    cin >> n;
    cout << a[n];
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
    a.pb(0);
    ll i;
    for (i = 1; i < N; i++)
    {
        ll t;
        t = sum(i);
        a.pb(a[i - 1] + t);
    }
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
