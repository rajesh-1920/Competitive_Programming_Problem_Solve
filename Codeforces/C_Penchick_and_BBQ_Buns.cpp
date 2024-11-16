// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  15.11.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//------------------------------------------------------------------------------------------
/*/----------------------------(Order_set)--------------------------------------------------
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
o_set<ll> s;
//---------------------------------------------------------------------------------------*/
/*/-------------------------Modular-Arithmatic----------------------------------------------
inline ll _normal(ll A, ll M)
{
    A = A - (A / M) * M;
    if (A < 0)
        A += M;
    return A;
}
inline ll modadd(ll A, ll B, ll M)
{
    A = _normal(A, M), B = _normal(B, M);
    return _normal(A + B, M);
}
inline ll modsub(ll A, ll B, ll M)
{
    A = _normal(A, M), B = _normal(B, M);
    return _normal(A - B, M);
}
inline ll modmul(ll A, ll B, ll M)
{
    A = _normal(A, M), B = _normal(B, M);
    return _normal(A * B, M);
}
inline ll binexpo(ll A, ll B, ll M)
{
    ll ans = _normal(1, M);
    while (B)
    {
        if (B & 1)
            ans = modmul(ans, A, M);
        A = modmul(A, A, M);
        B >>= 1;
    }
    return _normal(ans, M);
}
inline ll moddiv(ll A, ll B, ll M)
{
    A = _normal(A, M), B = _normal(B, M);
    return _normal(modmul(A, (binexpo(B, M - 2, M)), M), M);
}
//-----------------------------------------------------------------------------------------*/
//----------------------------(definition section)-------------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define dbg(x) cout << #x << " = " << x << '\n'
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

#define PI acos(-1)
#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989

#define eps 0.0000000001
#define inf 90000000000000
#define MOD 1000000007
#define N 200009
//------------------------------------------------------------------------------------------
set<ll> sq;

void solve(void)
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        vector<ll> an(n + 1);
        for (ll i = n; i >= 1; i--)
        {
            for (auto it : sq)
            {
                if (it > i)
                    break;
                ll x = i - it;
                if ((i - (x + x * x)) > 0 && x > 1 && sq.find((i - (x + x * x))) != sq.end())
                {
                    // cout << x << ' ' << x + x * x << ' ' << i << '\n';
                    an[x] = an[i] = an[x + x * x] = 1;
                    ll t = 2;
                    for (ll j = x + 2; j < x + x * x;)
                    {
                        an[j] = t;
                        j++;
                        an[j] = t;
                        j++;
                        t++;
                    }
                    an[x + 1] = an[1] = t++;
                    for (ll j = 2; j < x;)
                    {
                        an[j] = t;
                        j++;
                        an[j] = t;
                        j++;
                        t++;
                    }
                    for (ll j = x + x * x + 1; j < i;)
                    {
                        an[j] = t;
                        j++;
                        an[j] = t;
                        j++;
                        t++;
                    }
                    for (ll j = i + 1; j <= n;)
                    {
                        an[j] = t;
                        j++;
                        an[j] = t;
                        j++;
                        t++;
                    }
                    for (ll j = 1; j <= n; j++)
                        cout << an[j] << ' ';
                    cout << '\n';
                    return;
                }
            }
        }
        cout << -1 << '\n';
    }
    else
    {
        ll t = 1;
        for (ll i = 0; i < n / 2; i++)
        {
            cout << t << ' ' << t << ' ';
            t++;
        }
        cout << '\n';
    }
}
//------------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (ll i = 1; i * i <= N; i++)
        sq.insert(i * i);
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