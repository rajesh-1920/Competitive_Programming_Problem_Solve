// Author:  Rajesh Biswas
// Date  :  19.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll a1, b1, a2, b2, a3, b3, a4, b4;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 == a2 && b1 != b2)
    {
        a4 = a3 = a1 + abs(b2 - b1);
        b3 = b1;
        b4 = b2;
    }
    else if (a1 != a2 && b1 == b2)
    {
        a4 = a2;
        a3 = a1;
        b4 = b3 = b1 + abs(a1 - a2);
    }
    else if (a1 != a2 && b1 != b2)
    {
        if (abs(a1 - a2) != abs(b1 - b2))
        {
            cout << -1 << '\n';
            return;
        }
        a4 = a1;
        a3 = a2;
        b4 = b2;
        b3 = b1;
    }
    else
    {
        cout << -1 << '\n';
        return;
    }
    cout << a3 << ' ' << b3 << ' ' << a4 << ' ' << b4 << '\n';
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
