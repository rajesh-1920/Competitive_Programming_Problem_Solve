// Author:  Rajesh Biswas
// Date  :  14.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 5000009
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
//-----------------------------------------------------------------------------------
ll root(ll n)
{
    ll l = 0, h = n;
    while (h - l > 1)
    {
        ll m = (h + l) / 2;
        if (m * m == n)
            rrr m;
        if (m * m < n)
            l = m;
        else
            h = m;
    }
    if (h * h == n)
        rrr h;
    rrr l;
}
vector<ll> v(N, 0);
map<ll, ll> mp;
void sieve()
{
    for (int i = 2; i <= N; i++)
    {
        if (v[i] == 0)
        {
            if (i & 1)
                mp[i]++;
            for (int j = i + i; j <= N; j += i)
                v[j] = -1;
        }
    }
}
void solve(void)
{
    ll n;
    cin >> n;
    n -= 4;
    for (auto it : mp)
    {
        ll r = n - (it.fi * it.fi);
        if (r < 0)
        {
            No;
            rrr;
        }
        ll x = root(r);
        mp[x]++;
        mp[x]--;
        if (x * x == r && x != 2 && x != it.fi && mp[x] > 0)
        {
            // cout << x << ' ' << it << ' ';
            Yes;
            rrr;
        }
        else if (mp[x] == 0)
            mp.erase(x);
    }
    No;
}
//------------------------------------------------------------------------------------
int main()
{
    sieve();
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
