// Author:  Rajesh Biswas
// Date  :  02.04.2024

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
    ll i, j, fl = 1, f = 1;
    string s;
    cin >> s;
    for (i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && fl)
        {
            fl = 0;
            for (j = i + 2; j < s.size() - 1; j++)
                if (s[j] == 'B' && s[j + 1] == 'A')
                {
                    YES;
                    rrr;
                }
        }
        if (s[i] == 'B' && s[i + 1] == 'A' && f)
        {
            f = 0;
            for (j = i + 2; j < s.size() - 1; j++)
                if (s[j] == 'A' && s[j + 1] == 'B')
                {
                    YES;
                    rrr;
                }
        }
        if ((!f) && (!fl))
        {
            NO;
            rrr;
        }
    }
    NO;
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
/*
    for(auto &x:v)cin>>x;
*/
