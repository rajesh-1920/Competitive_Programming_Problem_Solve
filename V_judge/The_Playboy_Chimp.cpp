// Author:  Rajesh Biswas
// Date  :  12.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scl(n) scanf("%lld", &n)
#define scc(c) scanf("%c", &c)
#define scs(s) scanf("%s", &s)
#define scv(v, n) forn(i, 0, n) scl(v[i]);
#define prl(n) printf("%lld ", n)
#define No printf("No\n")
#define NO printf("NO\n")
#define Yes printf("Yes\n")
#define YES printf("YES\n")
#define nl cout << "\n"
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define N 200009
#define MOD 1000000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, q;
    scl(n);
    vector<ll> v(n);
    scv(v, n);
    scl(q);
    // cout<<q;
    while (q--)
    {
        ll x, l = -1, r = n;
        scl(x);
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (v[m] >= x)
                r = m - 1;
            else
                l = m;
        }
        if (v[r] < x && r > -1)
            cout << v[r] << ' ';
        else if (l == -1)
            cout << "X ";
        else
            cout << v[l] << ' ';
        l = -1, r = n;
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (v[m] <= x)
                l = m + 1;
            else
                r = m;
        }
        if (v[l] > x && l < n)
            cout << v[l] << '\n';
        else if (r == n)
            cout << "X\n";
        else
            cout << v[r] << '\n';
    }
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
