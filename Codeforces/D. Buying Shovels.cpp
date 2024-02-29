// Author:  Rajesh Biswas
// Date  :  30.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
bool chpr(const ll &n)
{
    ll i;
    if (n == 1 || n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (i = 3; i * i <= n + 1; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve(void)
{
    ll n, k, i, mn;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 1;
        nl;
        rrr;
    }
    if (chpr(n))
    {
        if (n % k == 0 && (n / k) <= k)
            n /= k;
        cout << n;
        nl;
        rrr;
    }
    mn = n;
    for (i = 1; i * i <= n + 1; i++)
    {
        if (n % i == 0 && i <= k)
        {
            mn = min(mn, n / i);
            if ((n / i) <= k)
                mn = min(mn, (n / (n / i)));
        }
    }
    cout << mn;
    nl;
}
//--------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
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