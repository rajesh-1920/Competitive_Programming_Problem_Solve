// Author:  Rajesh Biswas
// Date  :  03.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll x, y, k, res, temp;
    cin >> x >> y >> k;
    if (x > y)
        res = x;
    else
    {
        if (x + k >= y)
            res = y;
        else
        {
            res = x + k;
            temp = y - res;
            res += (2 * temp);
        }
    }
    cout << res << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}