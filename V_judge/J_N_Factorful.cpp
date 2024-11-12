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
#define N 1000009
//------------------------------------------------------------------------------------
ll lp[N], temp[N][15];
void sieve()
{
    for (ll i = 2; i <= N; i++)
    {
        if (lp[i] == 0)
            for (ll j = i; j <= N; j += i)
            {
                if (lp[j] == 0)
                    lp[j] = i;
            }
    }
}
void factor()
{
    for (ll i = 2; i <= N; i++)
    {
        set<ll> s;
        ll n = i;
        while (n > 1)
        {
            ll p = lp[n];
            while (n % p == 0)
            {
                n /= p;
                s.insert(p);
            }
        }
        ll t = s.size();
        if(t<=10)
        temp[i][t]++;
    }
    for (ll i = 1; i <= N; i++)
    {
        for (ll j = 0; j <= 10; j++)
            temp[i][j] += temp[i - 1][j];
    }
}
void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (b < a)
        swap(a, b);
    ll t1 = temp[a - 1][n];
    ll t2 = temp[b][n];
    cout << t2 - t1;
    // for(ll i=a;i<=10;i++)
    // cout<<temp[i][n]<<' ';
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    temp[1][0]++;
    sieve();
    factor();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
