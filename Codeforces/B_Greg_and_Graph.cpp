// Author:  Rajesh Biswas
// Date  :  17.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) cin >> (v[i]);
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
#define N 1009
//------------------------------------------------------------------------------------
ll dis[N][N];
void solve(void)
{
    ll n;
    cin >> n;
    vector<ll> ans, del(n);
    forn(i, 1, n + 1)
        forn(j, 1, n + 1) { cin >> dis[i][j]; }
    forn(i, 0, n) cin >> del[i];
    reverse(all(del));
    forn(k, 0, n)
    {
        ll to_delet = del[k];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= n; j++)
                dis[i][j] = min(dis[i][j], dis[i][to_delet] + dis[to_delet][j]);
        ll sum = 0;
        forn(i, 0, k + 1)
            forn(j, 0, k + 1)
                sum += dis[del[i]][del[j]];
        ans.pb(sum);
    }
    reverse(all(ans));
    for (auto ii : ans)
        cout << ii << ' ';
    nl;
}
//------------------------------------------------------------------------------------
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