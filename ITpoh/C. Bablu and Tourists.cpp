// Author:  Rajesh Biswas
// Date  :  05.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
#define pi 3.141592653589793238462643383279502884197

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
ll n, k;
vector<ll> v;
map<ll, vector<ll>> mp;
bool pre(ll h)
{
    nl;
    ll i, j, t;
    for (i = 0; i < k - 1; i++)
    {
        t = abs(h - v[i]);
        for (auto it : mp[t])
        {
            // cout << it << ' ';
            cout << h << ' ' << t << ' ' << i << ' ' << it << '\n';
            if (it > i && it < k)
                return true;
        }
    }
    return false;
}
void solve(void)
{
    v.clear();
    ll i, j, h, l, m;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> h;
        v.push_back(h);
        mp[h].push_back(i);
    }
    l = 0;
    h = 100000000000;
    while (h - l > 1)
    {
        m = (h + l) / 2;
        if (pre(m))
            l = m;
        else
            h = m;
    }
    cout << h << ' ' << l;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
/*
    for(auto &x:v)cin>>x;
*/
