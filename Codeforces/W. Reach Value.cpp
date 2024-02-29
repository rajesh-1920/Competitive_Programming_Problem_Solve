// Author:  Rajesh Biswas
// Date  :  06.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool res(ll n)
{
    if (n == 1)
        return true;
    else if (n % 200 == 0)
        return res(n / 200);
    else if (n % 20 == 0)
        return res(n / 20);
    else if (n % 10 == 0)
        return res(n / 10);
    else
        return false;
}
void solve(void)
{
    ll n;
    cin >> n;
    if (res(n))
        cout << "YES\n";
    else
        cout << "NO\n";
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
