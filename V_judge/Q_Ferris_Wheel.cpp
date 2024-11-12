// Author:  Rajesh Biswas
// Date  :  14.07.2024

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
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 2000009
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, ch;
    cin >> n >> m;
    ll cnt = 0, is_sited[25][25], seat[25], total = 0, avilable[25];
    for (int i = 1; i <= 24; i++)
    {
        avilable[i] = 1;
        seat[i] = 0;
        for (int j = 1; j <= 24; j++)
            is_sited[i][j] = 0;
    }
    ch = 1;
    while (true)
    {
        if (total == m * n)
            break;
        if (seat[ch] > 0)
        {
            total++;
            ll t = seat[ch];
            seat[ch] = 0;
            is_sited[t][ch] = 1;
            avilable[t] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (is_sited[i][ch] == 0 && avilable[i] == 1)
            {
                seat[ch] = i;
                avilable[i] = 0;
                break;
            }
        }
        ch++;
        if (ch > m)
            ch = 1;
        cnt++;
    }
    cout << cnt * 5;
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
        cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
