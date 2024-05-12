// Author:  Rajesh Biswas
// Date  :  10.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
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
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a, b;
    a.push_back(0);
    b.push_back(0);
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }

    while (q--)
    {
        ll d;
        cin >> d;
        if (d == 0)
            cout << 0 << ' ';
        else if (d == n)
            cout << b[k]<<' ';
        else
        {
            auto it = upper_bound(a.begin(), a.end(), d);
            it--;
            ll i = (it - a.begin());
            ll ans=b[i];
            ll t=b[i+1]-b[i];
            d-=a[i];
            ans+=(d*t/(a[i+1]-a[i]));
            cout << ans << ' ';
        }
    }
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
