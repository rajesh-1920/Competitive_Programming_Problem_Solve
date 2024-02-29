// Author:  Rajesh Biswas
// Date  :  16.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n, i, j, mx = 0, temp, c1;
    cin >> n;
    ll a[n], sum[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            sum[i] = a[i];
        else
            sum[i] = sum[i - 1] + a[i];
    }
    for (i = 0; i < n; i++)
    {
        temp = a[0];
        for (j = i; j < n; j++)
        {
            c1 = sum[n - 1] - sum[j - 1];
            if (i >= 1)
                temp = j - i + 1 - sum[j] + sum[i - 1];
            mx = max(mx, (sum[i] + c1 + temp));
        }
    }
    if (n == 1)
        mx = (1 - a[0]);
    if (sum[n - 1] == n)
        mx = n - 1;
    if (sum[n - 1] == 0)
        mx = n;
    cout << mx << '\n';
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
