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
#define N 200009
//------------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, i, j;
    cin >> n >> m >> i >> j;
    i--;
    j--;
    string s[n + 1], t;
    for (ll x = 0; x < n; x++)
        cin >> s[x];
    cin >> t;
    for (auto it : t)
    {
        if (it == 'U')
        {
            if (i > 0)
            {
                if (s[i - 1][j] == '.')
                    i--;
            }
        }
        if (it == 'D')
        {
            if (i < n - 1)
            {
                if (s[i + 1][j] == '.')
                    i++;
            }
        }
        if (it == 'R')
        {
            if (j < m - 1)
            {
                if (s[i][j + 1] == '.')
                    j++;
            }
        }
        if (it == 'L')
        {
            if (j > 0)
            {
                if (s[i][j - 1] == '.')
                    j--;
            }
        }
    }
    i++;
    j++;
    cout << i << ' ' << j;
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