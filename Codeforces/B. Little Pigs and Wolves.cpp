// Author:  Rajesh Biswas
// Date  :  06.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    int n, m, i, j, mx = 0;
    cin >> n >> m;
    char s[n + 1][m + 2];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> s[i][j];
            s[i][j] = tolower(s[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (s[i][j] == 'w')
            {
                if (s[i][j + 1] == 'p')
                {
                    mx++;
                    s[i][j + 1] = '.';
                    s[i][j] = '.';
                }
                else if (s[i][j - 1] == 'p')
                {
                    mx++;
                    s[i][j - 1] = '.';
                    s[i][j] = '.';
                }
                else if (s[i + 1][j] == 'p')
                {
                    mx++;
                    s[i + 1][j] = '.';
                    s[i][j] = '.';
                }
                else if (s[i - 1][j] == 'p')
                {
                    mx++;
                    s[i - 1][j] = '.';
                    s[i][j] = '.';
                }
            }
        }
    }
    cout << mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
