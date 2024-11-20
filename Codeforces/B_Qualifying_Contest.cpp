// Author:  Rajesh Biswas
// Date  :  11.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (i = st; i < end; i++)
#define ft(i, st, end) for (i = st; i < end; i++)

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
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, string>> v[m + 5];
    for (int i = 0; i < n; i++)
    {
        string s;
        ll r, vl;
        cin >> s >> r >> vl;
        v[r].push_back({vl, s});
    }
    for (int i = 1; i <= m; i++)
    {
        sort(rall(v[i]));
        if (v[i].size() == 2)
            cout << v[i][0].sc << ' ' << v[i][1].sc;
        else
        {
            if (v[i][1].fi == v[i][2].fi)
                cout << "?";
            else
                cout << v[i][0].sc << ' ' << v[i][1].sc;
        }
        nl;
    }
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