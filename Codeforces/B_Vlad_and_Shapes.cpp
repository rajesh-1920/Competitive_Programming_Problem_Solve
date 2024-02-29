// Author:  Rajesh Biswas
// Date  :  21.02.2024

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
    ll n, i, j;
    cin >> n;
    string s[n];
    for (i = 0; i < n; i++)
        cin >> s[i];
    for (i = 1; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            ll cnt = 0;
            if (s[i][j] == '1')
            {
                if (s[i][j + 1] == '1')
                    cnt++;
                if (s[i][j - 1] == '1')
                    cnt++;
                if (s[i - 1][j] == '1')
                    cnt++;
                if (s[i + 1][j] == '1')
                    cnt++;
                if (cnt < 2)
                {
                    cout << "TRIANGLE\n";
                    rrr;
                }
            }
        }
    }
    cout << "SQUARE\n";
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
        // cout << "Case " << T << " : ";
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
