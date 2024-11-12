// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  12.11.2024

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
#define N 2009
//------------------------------------------------------------------------------------------
void solve(void)
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    f(i, 0, n) cin >> a[i];
    if (n == 8)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
                f(l, 1, a[2] + 1)
                    f(m, 1, a[3] + 1)
                        f(o, 1, a[4] + 1)
                            f(p, 1, a[5] + 1)
                                f(q, 1, a[6] + 1)
                                    f(r, 1, a[7] + 1)
        {
            if ((i + j + l + m + o + p + q + r) % k == 0)
                cout << i << ' ' << j << ' ' << l << ' ' << m << ' ' << o << ' ' << p << ' ' << q << ' ' << r << '\n';
        }
    if (n == 7)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
                f(l, 1, a[2] + 1)
                    f(m, 1, a[3] + 1)
                        f(o, 1, a[4] + 1)
                            f(p, 1, a[5] + 1)
                                f(q, 1, a[6] + 1)
        {
            if ((i + j + l + m + o + p + q) % k == 0)
                cout << i << ' ' << j << ' ' << l << ' ' << m << ' ' << o << ' ' << p << ' ' << q << '\n';
        }
    if (n == 6)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
                f(l, 1, a[2] + 1)
                    f(m, 1, a[3] + 1)
                        f(o, 1, a[4] + 1)
                            f(p, 1, a[5] + 1)
        {
            if ((i + j + l + m + o + p) % k == 0)
                cout << i << ' ' << j << ' ' << l << ' ' << m << ' ' << o << ' ' << p << '\n';
        }
    if (n == 5)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
                f(l, 1, a[2] + 1)
                    f(m, 1, a[3] + 1)
                        f(o, 1, a[4] + 1)
        {
            if ((i + j + l + m + o) % k == 0)
                cout << i << ' ' << j << ' ' << l << ' ' << m << ' ' << o << '\n';
        }
    if (n == 4)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
                f(l, 1, a[2] + 1)
                    f(m, 1, a[3] + 1)
        {
            if ((i + j + l + m) % k == 0)
                cout << i << ' ' << j << ' ' << l << ' ' << m << '\n';
        }
    if (n == 3)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
                f(l, 1, a[2] + 1)
        {
            if ((i + j + l) % k == 0)
                cout << i << ' ' << j << ' ' << l << '\n';
        }
    if (n == 2)
        f(i, 1, a[0] + 1)
            f(j, 1, a[1] + 1)
        {
            if ((i + j) % k == 0)
                cout << i << ' ' << j << '\n';
        }
    if (n == 1)
        f(i, 1, a[0] + 1)
        {
            if ((i) % k == 0)
                cout << i << '\n';
        }
}
//------------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
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