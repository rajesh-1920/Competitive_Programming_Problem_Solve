// Author:  Rajesh Biswas
// Date  :  13.07.2024

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
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 100009
//------------------------------------------------------------------------------------
ll lp[N];
void sieve()
{
    for (ll i = 2; i <= N; i++)
    {
        for (ll j = i; j <= N; j += i)
        {
            if (lp[j] == 0)
                lp[j] = i;
        }
    }
}
void solve(ll n)
{
    set<ll> s;
    while (n > 1)
    {
        ll p = lp[n];
        while (n % p == 0)
        {
            n /= p;
            s.insert(p);
        }
    }
    for (auto it : s)
        cout << it << ' ';
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    sieve();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
    for (T = 2; T <= N - 9; T++)
    {
        cout << T << ": ";
        solve(T);
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
