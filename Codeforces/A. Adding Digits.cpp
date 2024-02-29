// Author:  Rajesh Biswas
// Date  :  18.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll a, b, n, i, fl, j;
    cin >> a >> b >> n;
    fl = 0;
    for (j = 9; j >= 0; j--)
    {
        if ((a * 10 + j) % b == 0)
        {
            fl = 1;
            a = a * 10 + j;
            n--;
            break;
        }
    }
    if (fl == 0)
    {
        a = -1;
        n = 0;
    }
    cout << a;
    while (n--)
        cout << 0;
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
