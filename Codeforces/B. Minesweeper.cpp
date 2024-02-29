// Author:  Rajesh Biswas
// Date  :  03.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

// #define dissp(n) for(auto i:n)cout<<i<<" ";cout<<'\n';
// #define dis(n) for(auto i:n)cout<<i<<'\n';
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, i, j, cnt;
    cin >> n >> m;
    char s[n][m + 1];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> s[i][j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cnt = 0;
            if (s[i][j] != '*')
            {
                if (j < m - 1)
                {
                    if (s[i][j + 1] == '*')
                        cnt++;
                }
                if (j > 0)
                {
                    if (s[i][j - 1] == '*')
                        cnt++;
                }
                if (i < n - 1)
                {
                    if (s[i + 1][j] == '*')
                        cnt++;
                }
                if (j < m - 1 && i < n - 1)
                {
                    if (s[i + 1][j + 1] == '*')
                        cnt++;
                }
                if (j > 0 && i < n - 1)
                {
                    if (s[i + 1][j - 1] == '*')
                        cnt++;
                }
                if (i > 0)
                {
                    if (s[i - 1][j] == '*')
                        cnt++;
                }
                if (j < m - 1 && i > 0)
                {
                    if (s[i - 1][j + 1] == '*')
                        cnt++;
                }
                if (j > 0 && i > 0)
                {
                    if (s[i - 1][j - 1] == '*')
                        cnt++;
                }
                if (s[i][j] == '.')
                {
                    if (cnt > 0)
                    {
                        NO;
                        rrr;
                    }
                }
                else if (cnt != (s[i][j] - '0'))
                {
                    NO;
                    rrr;
                }
            }
        }
    }
    YES;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
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