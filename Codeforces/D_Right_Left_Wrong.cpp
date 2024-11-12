// Author:  Rajesh Biswas
// Date  :  16.08.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) cin >> (v[i]);
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
#define N 100009
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n;
    cin >> n;
    ll a[n + 5];
    a[0] = 0;
    forn(i, 1, n + 1)
    {
        ll x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }

    string s;
    cin >> s;
    ll sum = 0, lr = -1, fl = n;
    for (int i = n - 1; i >= 0; i--)
        if (s[i] == 'R')
        {
            lr = i;
            break;
        }
    for (int i = 0; i < n; i++)
        if (s[i] == 'L')
        {
            fl = i;
            break;
        }
    while (lr > fl)
    {
        if (s[fl] == 'L' && s[lr] == 'R')
        {
            sum += (a[lr + 1] - a[fl]);
            // cout << fl << ' ' << lr << ' ' << sum << '\n';
            fl++;
            lr--;
        }
        else
        {
            if (s[fl] == 'R')
                fl++;
            else
                lr--;
        }
    }
    cout << sum;
    nl;
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