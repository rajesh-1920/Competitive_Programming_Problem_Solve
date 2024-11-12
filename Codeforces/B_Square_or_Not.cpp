// Author:  Rajesh Biswas
// Date  :  01.09.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
ll find_root(ll n)
{
    ll l = 0, h = n + 5;
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
void solve(void)
{
    ll n;
    string s;
    cin >> n >> s;
    ll t = find_root(n);
    if (t * t != n)
    {
        No;
        rrr;
    }
    ll l = 0, j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (j == 0 || j == t - 1)
        {
            if (s[i] != '1')
            {
                No;
                rrr;
            }
        }
        else if (l == 0 || l == t - 1)
        {
            if (s[i] != '1')
            {
                No;
                rrr;
            }
        }
        else
        {
            if (s[i] != '0')
            {
                No;
                rrr;
                // cout<<i<<' '<<j;
            }
        }
        j++;
        if (j == t)
        {
            l++;
            j = 0;
        }
    }
    Yes;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
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