// Author:  Rajesh Biswas
// Date  :  23.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
void solve()
{
    int n, m;
    string s, c;
    cin >> n >> m >> s;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (mp[x] == 0)
            v.pb(x - 1);
        mp[x]++;
    }
    cin >> c;
    sort(v.begin(), v.end());
    sort(c.begin(), c.end());
    for (int i = 0; i < v.size(); i++)
        s[v[i]] = c[i];
    cout << s;
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
