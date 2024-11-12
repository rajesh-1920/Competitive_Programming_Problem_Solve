// Author:  Rajesh Biswas
// Date  :  12.07.2024

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
#define No printf("No")
#define NO printf("NO")
#define Yes printf("Yes")
#define YES printf("YES")
#define nl printf("\n")
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
bool cmp(pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b)
{
    if (a.fi.fi == b.fi.fi)
        return a.fi.sc < b.fi.sc;
    return a.fi.fi > b.fi.fi;
}
void solve(void)
{
    map<pair<ll, ll>, ll> mp, ac;
    ll con, pob, sub_time;
    char ch;
    map<ll, ll> is_submit;
    while (cin >> con >> pob >> sub_time >> ch)
    {
        is_submit[con] = 1;
        if (ch == 'I' || ch == 'C')
            mp[{con, pob}]++;
        if (ch == 'C')
        {
            ac[{con, pob}] = sub_time;
        }
    }
    vector<pair<pair<ll, ll>, ll>> v;
    for (int i = 1; i <= 100; i++)
    {
        if (is_submit[i] == 1)
        {
            ll penalty = 0, sol = 0;
            for (int j = 1; j <= 9; j++)
            {
                if (ac.find({i, j}) != ac.end())
                {
                    penalty += (mp[{i, j}] - 1) * 20 + ac[{i, j}];
                    sol++;
                    // cout << i << ' ' << j << ' ' << mp[{i, j}] << '\n';
                }
            }
            v.push_back({{sol, penalty}, i});
        }
    }
    sort(all(v), cmp);
    for (auto it : v)
        cout << it.sc << ' ' << it.fi.fi << ' ' << it.fi.sc << '\n';
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
    getchar();
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
