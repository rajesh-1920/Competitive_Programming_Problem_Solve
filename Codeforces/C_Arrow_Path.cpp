// Author:  Rajesh Biswas
// Date  :  15.03.2024

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
ll n;
string s[2];
map<pair<ll, ll>, ll> mp;
void go(ll i, ll j)
{
    if (i < 0 || i > 1 || j < 0 || j >= n)
        rrr;
    if (mp[{i, j}])
        rrr;
    mp[{i, j}]++;
    if (i == 1 && j == n - 1)
        rrr;
    if (i == 0)
    {
        mp[{i + 1, j}]++;
        if (s[i + 1][j] == '>')
            go(i + 1, j + 1);
        else
            go(i + 1, j - 1);
        if (j + 1 < n)
        {
            mp[{i, j + 1}]++;
            if (s[i][j + 1] == '>')
                go(i, j + 2);
        }
        if (j > 0)
        {
            mp[{i, j - 1}]++;
            if (s[i][j - 1] == '<')
                go(i, j - 2);
        }
    }
    else
    {
        mp[{i - 1, j}]++;
        if (s[i - 1][j] == '>')
            go(i - 1, j + 1);
        else
            go(i - 1, j - 1);
        if (j + 1 < n)
        {
            mp[{i, j + 1}]++;
            if (s[i][j + 1] == '>')
                go(i, j + 2);
        }
        if (j > 0)
        {
            mp[{i, j - 1}]++;
            if (s[i][j - 1] == '<')
                go(i, j - 2);
        }
    }
}
void solve()
{
    cin >> n;
    cin >> s[0] >> s[1];
    mp.clear();
    go(0, 0);
    if (mp[{1, n - 1}])
        YES;
    else
        NO;
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
