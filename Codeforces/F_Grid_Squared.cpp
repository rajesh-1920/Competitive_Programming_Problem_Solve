// Author:  Rajesh Biswas
// Date  :  11.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (ll i = st; i < end; i++)

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
#define N 100009
//------------------------------------------------------------------------------------
ll a[1000000], b[1000000], mx = 100000000;
void solve()
{
    ll n;
    cin >> n;
    ll ans = n * n - n + 1;
    for (ll i = 2; i <= n; i++)
    {
        ll t = a[i];
        ll d = b[i];
        //ans -= t;
        ans -= (n-d);
    }
    cout << ans;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    for (ll i = 2; i <= N; i++)
    {
        ll cnt = 1, s = 0;
        for (ll j = i * i; j <= N; j = j * j)
        {
            s += (mx - cnt);
            cnt++;
        }
        a[i] = s;
        b[i] = cnt - 1;
    }
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
