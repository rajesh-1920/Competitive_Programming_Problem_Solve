#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        if (!(r & 1))
            r--;
        if (r >= l)
            cout << 1 + (r - l) / 2 << '\n';
        else
            cout << 0 << '\n';
    }
}
