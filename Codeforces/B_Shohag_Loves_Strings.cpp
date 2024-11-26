// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  23.11.2024

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
set<string> st;
void substring(string mainn, string ans)
{
    if (mainn.size() == 0)
    {
        if (ans.size())
        {
            //cout << ans << '\n';
            st.insert(ans);
        }
        return;
    }
    substring(mainn.substr(1), ans);
    substring(mainn.substr(1), ans + mainn[0]);
}
void solve(void)
{
    string s;
    cin >> s;
    // for (ll i = 0; i + 1 < s.size(); i++)
    // {
    //     if (s[i] == s[i + 1])
    //     {
    //         cout << s[i] << s[i] << '\n';
    //         return;
    //     }
    // }
    // for (ll i = 0; i + 3 < s.size(); i++)
    // {
    //     if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i] != s[i + 3])
    //         if (s[i + 1] != s[i + 2] && s[i + 1] != s[i + 3] && s[i + 2] != s[i + 3])
    //         {
    //             cout << s[i] << s[i + 1] << s[i + 2] << s[i + 3] << '\n';
    //             return;
    //         }
    // }
    // map<char, ll> mp;
    // for (ll i = 0; i < s.size(); i++)
    // {
    //     if (mp[s[i]] != 0)
    //     {
    //         for (ll j = mp[s[i]] - 1; j <= i; j++)
    //             cout << s[j];
    //         cout << '\n';
    //         return;
    //     }
    //     mp[s[i]] = i + 1;
    // }
    // cout << -1 << '\n';
    substring(s, "");
    cout << st.size();
}
//------------------------------------------------------------------------------------------
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