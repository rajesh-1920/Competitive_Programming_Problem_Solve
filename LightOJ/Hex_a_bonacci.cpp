// Author:  Rajesh Biswas
// Date  :  03.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a, b, c, d, e, f;
ll dp[100000];
ll fn(ll n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;
    if (dp[n] >= 0)
        return dp[n];
    return dp[n] = (fn(n - 1) % 10000007 + fn(n - 2) % 10000007 + fn(n - 3) % 10000007 + fn(n - 4) % 10000007 + fn(n - 5) % 10000007 + fn(n - 6) % 10000007) % 10000007;
}
int main()
{
    ll n, cases, i;
    cin >> cases;
    for (ll caseno = 1; caseno <= cases; ++caseno)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;
        for (i = 0; i <= n + 100; i++)
            dp[i] = -1;
        cout << "Case " << caseno << ": " << (fn(n) % 10000007) << '\n';
    }
    return 0;
}