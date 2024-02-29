// Author:  Rajesh Biswas
// Date  :  05.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n, cnt = 0, i, j, t, r;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            t = (j * j) + (i * i);
            r = sqrt(t);
            if (r * r == t && r <= n)
                cnt++;
        }
    }
    cout << cnt << '\n';
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
