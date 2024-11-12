// Author:  Rajesh Biswas
// Date  :  03.09.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
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
#define N 200009
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), ta0, ta1;
    vector<pair<ll, ll>> vp;
    map<pair<ll, ll>, ll> mp;
    map<ll, ll> mt0, mt1;
    ll cta = 0, ctb = 0;
    f(i, 0, n)
    {
        cin >> a[i] >> b[i];
        vp.push_back({a[i], b[i]});
        mp[{a[i], b[i]}]++;
        if (b[i] == 0)
        {
            ta0.pb(a[i]);
            mt0[a[i]]++;
        }
        else
        {
            ta1.pb(a[i]);
            mt1[a[i]]++;
        }
    }
    sort(all(vp));
    sort(all(ta0));
    sort(all(ta1));
    ll ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (vp[i].sc == 1)
        {
            if (mp.find({vp[i].fi, 0}) != mp.end())
            {
                auto lw = lower_bound(all(ta0), vp[i].fi);
                ans += (lw - ta0.begin());
                auto up = upper_bound(all(ta0), vp[i].fi);
                ans += (ta0.end() - up);
            }
        }
        else
        {
            if (mp.find({vp[i].fi, 1}) != mp.end())
            {
                auto lw = lower_bound(all(ta1), vp[i].fi);
                ans += (lw - ta1.begin());
                auto up = upper_bound(all(ta1), vp[i].fi);
                ans += (ta1.end() - up);
            }
        }
    }
    for (auto it : ta0)
    {
        if (mt1.find(it - 1) != mt1.end() && mt1.find(it + 1) != mt1.end())
            ans++;
    }
    for (auto it : ta1)
    {
        if (mt0.find(it - 1) != mt0.end() && mt0.find(it + 1) != mt0.end())
            ans++;
    }
    cout << ans;
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