// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  17.11.2024

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
    map<ll, ll> mp;
    map<ll, multiset<ll>> point;
    set<ll> nextpos, nextpoint;
    ll n, m, l;
    cin >> n >> m >> l;
    f(i, 0, n)
    {
        ll x, y;
        cin >> x >> y;
        mp[x] = y;
        nextpoint.insert(x);
    }
    f(i, 0, m)
    {
        ll x, y;
        cin >> x >> y;
        point[x].insert(y);
        nextpos.insert(x);
    }
    nextpos.insert(l);
    nextpoint.insert(l + 1);
    multiset<ll> st;
    ll start = 1, pw = 1, ans = 0;
    while (start < l)
    {
        for (auto it : point[start])
            st.insert(it);

        if (mp.find(start + 1) == mp.end())
        {
            auto itpos = nextpos.upper_bound(start);
            auto itpoint = nextpoint.upper_bound(start);
            ll x = (*itpos);
            ll y = (*itpoint) - 1;
            // start++;
            start = max(start, min(x, y));
        }
        else
        {
            ll x = mp[start + 1] - start + 1;
            while (!st.empty())
            {
                if (x <= pw)
                    break;
                auto it = --st.end();
                pw += (*it);
                st.erase(it);
                ans++;
            }
            if (pw < x)
            {
                cout << -1 << '\n';
                return;
            }
            start = mp[start + 1] + 1;
        }
    }
    cout << ans << '\n';
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