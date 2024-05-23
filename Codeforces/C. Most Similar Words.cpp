// Author:  Rajesh Biswas
// Date  :  04.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define fi first
#define sc second
#define pb(x) push_back(x);

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, i, mn = 1e15, j, sum, k;
    cin >> n >> m;
    string s[n];
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        for (k = 0; k < i; k++)
        {
            sum = 0;
            for (j = 0; j < m; j++)
                sum += (abs(s[i][j] - s[k][j]));
            mn = min(mn, sum);
        }
    }
    cout << mn << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
