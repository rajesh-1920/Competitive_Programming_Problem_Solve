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
o_set<ll> st;
ll pos = st.order_of_key(5);
ll val = *st.find_by_order(2);
//---------------------------------------------------------------------------------------*/
/*/------------------------(Modular-Arithmatic)---------------------------------------------
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
/*/-----------------------------(use of sieve)----------------------------------------------
vector<ll> lp(N, 0), prime(N, 1), sum(N, 0), pod(N, 1), cnt(N, 0), phi(N);
void sieve()
{
    for (ll i = 1; i < N; i++)
        phi[i] = i;
    for (ll i = 2; i < N; i++)
    {
        if (phi[i] == i)
            for (ll j = i; j < N; j += i)
                phi[j] -= (phi[j] / i);
        // phi(a*b) = phi(a) * phi(b) * (gcd(a, b) / (phi{gcd(a, b)}));
        for (ll j = i; j < N; j += i)
        {
            cnt[j]++;
            pod[j] *= i;
            sum[j] += i;
        }
        if (prime[i])
        {
            lp[i] = i;
            for (ll j = i + i; j < N; j += i)
            {
                cnt[j]++;
                pod[j] *= i;
                sum[j] += i;
                prime[j] = 0;
                if (!lp[j])
                    lp[j] = i;
            }
        }
    }
}
//---------------------------------(number theory)------------------------------------
**snd(p ^ a) = 1 + 2 + 3 + 4 + 5 + -- -- -- -+a + (a + 1);
**n !er prime factor = (n / p) + (n / p ^ 2) + -- -;
**(1 - N) porjonto gcd(i, j) > 1 hobe ? ? ? ?
{
    total possible pair = (N * (N - 1) / 2);
    er por ans = total theke sobgulor coprime number bad jabe..**time komate prefix sum;
    ans = total - pre[N] + (n - 1); // (i==j) er jonno n-1 ta;
}
/* minimum number jar divisor sonkha = n
{
    ll primearr[]={2,3,5,7,11,13,17,19,23,29,31,37};
    ll n;
    ll ans(ll res_now,ll n_now,ll ind)
    {
        if(n_now==n)
        return res_now;
        ll res=2e8+5;
        for(ll i=1;i<=70;i++)
        {
            res_now*=prime[ind];
            if(res_now>res||n_now*(i+1)>n)
            break;
            res=min(res,ans(res_now,n_now*(i+1),ind+1));
        }
        return res;
    }
}
//----------------------------------------------------------------------------------------*/
/*/------------------------(Dynamic programming)---------------------------------------------
ll dp[N];
ll ok(ll rem_sum, vector<ll> &coin) // coin sum
{
    if (rem_sum == 0)
        return 0;
    if (dp[rem_sum] != -1)
        return dp[rem_sum];

    ll ans = LONG_LONG_MAX / 2;
    for (auto it : coin)
    {
        if (rem_sum >= it)
            ans = min(ans, (1LL + ok(rem_sum - it, coin)));
    }
    rrr dp[rem_sum] = ans;
}
**grid e akti rekhar upor koiti bindu ace jegulo purno sonkha
     ans = gcd((x1 - x2), (y1 - y2)) + 1; // bindu 2 tar katalan distance
//----------------------------------------------------------------------------------------*/
/*/-----------------------------(Graph theory)------------------------------------------------
vector<ll> g[N], topo;
ll vis[N], cycle;
void dfs(ll n) // topological sort
{
    vis[n] = 1;
    for (auto it : g[n])
    {
        if (vis[it] == 1)
            cycle = 1;
        if (vis[it] == 0)
            dfs(it);
    }
    vis[n] = 2;
    topo.push_back(n);
}
// reverse(all(topo));
//  LCA
ll par[N];
void Dfs(ll v, ll pr = -1)
{
    par[v] = pr;
    for (auto it : g[v])
    {
        if (it == pr)
            continue;
        Dfs(it, v);
    }
}
vector<ll> path(int v)
{
    vector<ll> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = par[v];
    }
    reverse(all(ans));
    return ans;
}
// abar 2 ta point tehke path ber kore 1st teke jekhane diff pabo oitai ans
// multisource bfs a sob source gulo age queue te jabe
//******* DSU ******
vector<pair<ll, ll>> ans[N];
ll par[N], sz[N];
void init(ll a)
{
    par[a] = a, sz[a] = 1;
}
ll parent(ll a)
{
    if (par[a] == a)
        return a;
    return par[a] = parent(par[a]);
}
void _union(ll a, ll b, ll w)
{
    ll pa = parent(a), pb = parent(b);
    if (sz[pa] < sz[pb])
        swap(pa, pb);
    if (pa != pb)
    {
        par[pb] = pa, sz[pa] += sz[pb];
    }
}
//----------------------------------------------------------------------------------------*/
//-----------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------*/

void solve(void)
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &it : arr)
        cin >> it;
    vector<int> tail(n + 5, 0);
    vector<int> prev(n + 5, -1);
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[tail[0]])
            tail[0] = i;
        else if (arr[i] > arr[tail[len - 1]])
        {
            prev[i] = tail[len - 1];
            tail[len++] = i;
        }
        else
        {
            ll pos, l = -1, r = len - 1, key = arr[i];
            while (r - l > 1)
            {
                int m = l + (r - l) / 2;
                if (arr[tail[m]] >= key)
                    r = m;
                else
                    l = m;
            }
            pos = r;
            prev[i] = tail[pos - 1];
            tail[pos] = i;
        }
    }
    cout << len << '\n';
    vector<ll> ans;
    for (int i = tail[len - 1]; i >= 0; i = prev[i])
        ans.emplace_back(arr[i]);
    reverse(all(ans));
    for (auto it : ans)
        cout << it << ' ';
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