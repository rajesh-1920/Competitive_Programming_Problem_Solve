// Author : Rajesh Biswas
// Date : 14.08.2023
// Problem : K-th Not Divisible by n
// Ratings : 1200
// contest : Div.4 (Round 640)

#include <iostream>
using namespace std;
typedef long long int ll;

void solve(void);
int main(void)
{
    ll test;
    cin >> test;
    while (test--)
        solve();
}

void solve(void)
{
    ll n, k, temp, res = 0;
    cin >> n >> k;
    if (k < n)
        res = k;
    else if (k == n)
        res = n + 1;
    else
    {
        temp = n - 1;
        res = (n * (k / temp) + (k % temp));
        if (k % temp == 0)
            res--;
    }
    cout << res << '\n';
}
