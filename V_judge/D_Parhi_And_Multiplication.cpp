// Author:  Rajesh Biswas
// Date  :  13.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) scl(v[i]);
#define scl(n) scanf("%lld", &n)
#define scc(c) scanf("%c", &c)
#define scs(s) scanf("%s", &s)
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
    ll n, ans = 1;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ans = (x % MOD * ans % MOD) % MOD;
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