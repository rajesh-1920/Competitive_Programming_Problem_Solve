// Author:  Rajesh Biswas
// Date  :  27.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
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
    string s1, s2;
    ll n, i, j, k;
    cin >> n >> s1 >> s2;
    for (i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
            continue;
        if (s1[i] != 'a' || s2[i] != 'c')
        {
            No;
            rrr;
        }
        bool fl = true;
        for (j = i + 1; j < n; j++)
            if (s1[j] == 'b')
            {
                fl = false;
                break;
            }
        if (fl)
        {
            No;
            rrr;
        }
        fl = true;
        for (k = j + 1; k < n; k++)
            if (s1[k] == 'c' && s2[k] != 'c')
            {
                fl = false;
                break;
            }
        if (fl)
        {
            No;
            rrr;
        }
        s1[k] = 'a';
    }
    Yes;
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
