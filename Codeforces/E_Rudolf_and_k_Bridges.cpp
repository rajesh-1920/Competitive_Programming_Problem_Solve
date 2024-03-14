// Author:  Rajesh Biswas
// Date  :  14.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n, m, k, d, i, t, x, l, mn = 100000000000000;
    cin >> n >> m >> k >> d;
    vector<ll> a(n + 1, 0);
    l = 0;
    for (t = 1; t <= n; t++)
    {
        vector<ll> vec(m, 0);
        multiset<ll> s;
        ll pos = 0;
        cin >> x;
        vec[0] = 1;
        s.insert(1);
        for (i = 1; i < m; i++)
        {
            cin >> x;
            vec[i] = x + 1 + (*s.begin());
            s.insert(vec[i]);
            if (i > d)
                s.erase(s.find(vec[pos++]));
        }
        a[t] = a[t - 1] + vec[m - 1];
        if (t >= k)
            mn = min(mn, (a[t] - a[t - k]));
    }
    cout << mn;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
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
/*
    for(auto &x:v)cin>>x;
*/
