// Author:  Rajesh Biswas
// Date  :  28.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
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
map<ll, ll> v;
ll cnt;
void binary(ll num, ll t)
{
    if (t == cnt)
    {
        v[num]++;
        rrr;
    }
    num = num * 10 + 0;
    binary(num, t + 1);
    num /= 10;
    num = num * 10 + 1;
    binary(num, t + 1);
    num /= 10;
}
bool check(ll m)
{
    if (m == 0)
        return false;
    if (m == 1)
        return true;
    for (auto it : v)
    {
        if (it.fi > 1)
        {
            if (m % (it.fi) == 0)
            {
                if (v[m / it.fi] > 0)
                    return true;
                v.erase(m / it.fi);
                return check(m / it.fi);
            }
        }
    }
    return false;
}
void solve()
{
    v.clear();
    ll n, t, c0 = 0, c1 = 0;
    cnt = 0;
    cin >> n;
    t = n;
    while (t > 0)
    {
        if (t % 10 == 0)
            c0++;
        else if (t % 10 == 1)
            c1++;
        cnt++;
        t /= 10;
    }
    if (cnt == (c0 + c1) || n == 1)
    {
        YES;
        rrr;
    }
    binary(0, 0);
    if (check(n))
        YES;
    else
        NO;
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
