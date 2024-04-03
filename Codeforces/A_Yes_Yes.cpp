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
    string s;
    cin >> s;
    ll i, fl = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (fl == 1)
        {
            if (s[i] == 'e')
                fl = 2;
            else
            {
                NO;
                rrr;
            }
        }
        else if (fl == 2)
        {
            if (s[i] == 's')
                fl = 3;
            else
            {
                NO;
                rrr;
            }
        }
        else if (fl == 3)
        {
            if (s[i] == 'Y')
                fl = 1;
            else
            {
                NO;
                rrr;
            }
        }
        if (fl == 0)
        {
            if (s[i] == 'Y')
                fl = 1;
            else if (s[i] == 'e')
                fl = 2;
            else if (s[i] == 's')
                fl = 3;
            else
            {
                NO;
                rrr;
            }
        }
    }
    YES;
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
