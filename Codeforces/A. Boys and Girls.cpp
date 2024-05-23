// Author:  Rajesh Biswas
// Date  :  05.10.2023

#include <bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll m, n, i;
    cin >> n >> m;
    if (n > m)
    {
        for (i = 0; i < m; i++)
            cout << "BG";
        for (i; i < n; i++)
            cout << "B";
    }
    else
    {
        for (i = 0; i < n; i++)
            cout << "GB";
        for (i; i < m; i++)
            cout << "G";
    }
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
