// Author:  Rajesh Biswas
// CF    :  rajesh19

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)------------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define dbg(x) cout << #x << " = " << x << '\n'
#define rrr return
#define fi first
#define sc second

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
/*/----------------------------(Order_set)--------------------------------------------------
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
o_set<ll> s;
//---------------------------------------------------------------------------------------*/
/*/------------------------(Modular-Arithmatic)---------------------------------------------
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
}/*
ll outer = 1;
if (is_odd)
{
    for (ll i = 1; i <= n; i++)
    {
        if (i == posi)
            outer = (outer * ((powe[i] + 1) / 2)) % (MOD - 1);
        else
            outer = (outer * ((powe[i] + 1))) % (MOD - 1);
    }
    for (ll i = 1; i <= n; i++)
        pod = modmul(pod, (binexpo(prime[i], _normal(powe[i] * outer, (MOD - 1)), MOD)), MOD);
}
else
{
    for (ll i = 1; i <= n; i++)
        outer = (outer * ((powe[i] + 1))) % (MOD - 1);
    for (ll i = 1; i <= n; i++)
        pod = modmul(pod, (binexpo(prime[i], _normal(powe[i] / 2 * outer, (MOD - 1)), MOD)), MOD);
}
//-----------------------------------------------------------------------------------------*/
/*/--------------------------(Trie Data structure)------------------------------------------
struct node
{
    ll cnt, nxt[26];
    node()
    {
        cnt = 0;
        memset(nxt, -1, sizeof(nxt));
    }
};
vector<node> Trie(1);
inline void add(string &s)
{
    ll root = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (Trie[root].nxt[s[i] - 'a'] == -1)
        {
            Trie[root].nxt[s[i] - 'a'] = Trie.size();
            Trie.emplace_back();
        }
        root = Trie[root].nxt[s[i] - 'a'];
        Trie[root].cnt++;
    }
}
inline ll qry(string &s)
{
    ll root = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (Trie[root].nxt[s[i] - 'a'] == -1)
            return 0;
        root = Trie[root].nxt[s[i] - 'a'];
    }
    return Trie[root].cnt;
}
//-----------------------------------------------------------------------------------------*/
/*/-------------------------(Segment tree with lazy)----------------------------------------
ll a[N], tree[4 * N], lazy[4 * N];
void init(ll nd, ll l, ll r)
{
    if (l == r)
    {
        tree[nd] = a[l];
        return;
    }

    ll mid = (l + r) / 2;
    init(nd * 2, l, mid);
    init(nd * 2 + 1, mid + 1, r);
    tree[nd] = tree[nd * 2] + tree[nd * 2 + 1];
}
void update(ll nd, ll l, ll r, ll &myl, ll &myr, ll &val)
{
    if (lazy[nd])
    {
        tree[nd] += lazy[nd] * (r - l + 1);
        if (l != r)
        {
            lazy[nd * 2] += lazy[nd];
            lazy[nd * 2 + 1] += lazy[nd];
        }
        lazy[nd] = 0;
    }
    if (l > r || l > myr || r < myl)
        return;
    if (l >= myl && r <= myr) // in range
    {
        tree[nd] += val * (r - l + 1);
        if (l != r)
        {
            lazy[nd * 2] += val;
            lazy[nd * 2 + 1] += val;
        }
        return;
    }
    ll mid = (l + r) / 2;
    update(nd * 2, l, mid, myl, myr, val);
    update(nd * 2 + 1, mid + 1, r, myl, myr, val);
    tree[nd] = tree[nd * 2] + tree[nd * 2 + 1];
}
ll value(ll nd, ll l, ll r, ll &myl, ll &myr)
{
    if (lazy[nd])
    {
        tree[nd] += lazy[nd] * (r - l + 1);
        if (l != r)
        {
            lazy[nd * 2] += lazy[nd];
            lazy[nd * 2 + 1] += lazy[nd];
        }
        lazy[nd] = 0;
    }
    if (l > r || l > myr || r < myl)
        return 0;
    if (l >= myl && r <= myr) // in range
        return tree[nd];
    ll mid = (l + r) / 2;
    return value(nd * 2, l, mid, myl, myr) + value(nd * 2 + 1, mid + 1, r, myl, myr);
}
//----------------------------------------------------------------------------------------*/
void solve(void)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;
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