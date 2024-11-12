// Author:  Rajesh Biswas
// Date  :  10.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define scl(n) scanf("%lld", &n)
#define scs(s) scanf("%s", s)
#define scc(c) scanf("%c", &c)
#define prl(n) printf("%lld ", n)
#define prc(ch) printf("%c", ch)
#define prs(s) printf("%s", s)
#define No prs("No")
#define Yes prs("Yes")
#define YES prs("YES")
#define NO prs("NO")
#define nl prc('\n')
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) scl(v[i]);
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
    ll q;
    scl(q);
    list<ll> l;
    auto it = l.end();
    while (q--)
    {
        ll x, y;
        scl(x);
        if (x == 2)
        {
            if (it != l.end())
                it = l.erase(it);
        }
        else
        {
            scl(y);
            if (x == 0)
                it = l.insert(it, y);
            else
                advance(it, y);
        }
    }
    for (auto ii : l)
        cout << ii << '\n';
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
/*
    for(auto &x:v)cin>>x;
*/
