// Author:  Rajesh Biswas
// Date  :  02.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n, m, i, j;
    cin >> n >> m;
    string s[n];
    ll a[n], t;
    for (i = 0; i < n; i++)
        cin >> s[i];
    char mx;
    for (j = 0; j < m; j++)
    {
        mx = '0';
        for (i = 0; i < n; i++)
        {
            if (mx < s[i][j])
            {
                mx = s[i][j];
                t = i;
            }
        }
        a[t] = 1;
    }
    for (j = 0; j < m; j++)
    {
        mx = '0';
        for (i = 0; i < n; i++)
        {
            if (mx < s[i][j])
            {
                mx = s[i][j];
                t = i;
            }
            if (mx == s[i][j] && a[i] != 1)
                t = i;
        }
        a[t] = 1;
    }
    sort(a, a + n);
    cout << count(a, a + n, 1) << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;gd
    while (t--)
        solve();
    return 0;
}