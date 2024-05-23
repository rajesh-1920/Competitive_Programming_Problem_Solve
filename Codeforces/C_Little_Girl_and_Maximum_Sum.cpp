// Author:  Rajesh Biswas
// Date  :  27.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, q, i, x, y;
    cin >> n >> q;
    vector<ll> a(n), res(n + 5, 0);
    vector<pair<ll, ll>> v, vq;
    for (i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        cin >> x >> y;
        res[x]++;
        res[y + 1]--;
        vq.ppb(x, y);
    }
    for (i = 1; i <= n; i++)
    {
        res[i] += res[i - 1];
        v.ppb(res[i], i);
    }
    sort(a.rbegin(), a.rend());
    sort(v.rbegin(), v.rend());
    for (i = 0; i < n; i++)
        res[v[i].sc] = a[i];
    for (i = 1; i <= n; i++)
        res[i] += res[i - 1];
    ll sum = 0;
    for (i = 0; i < vq.size(); i++)
        sum += (res[vq[i].sc] - res[vq[i].fi - 1]);
    cout << sum;
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
        // cout << "Case " << T << ": ";
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
