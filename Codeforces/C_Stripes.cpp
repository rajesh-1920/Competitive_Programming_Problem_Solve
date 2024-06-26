// Author:  Rajesh Biswas
// Date  :  24.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
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
void solve(void)
{
    string s[8];
    ll i, j;
    for (i = 0; i < 8; i++)
        cin >> s[i];
    ll cb, cr;
    for (i = 0; i < 8; i++)
    {
        cr = 0;
        for (j = 0; j < 8; j++)
        {
            if (s[i][j] == 'R')
                cr++;
        }
        if (cr == 8)
        {
            cout << 'R';
            nl;
            rrr;
        }
    }
    cout << 'B';
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
/*
    for(auto &x:v)cin>>x;
*/
