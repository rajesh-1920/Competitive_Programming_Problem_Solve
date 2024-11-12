#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#else
#define dbg(...)
#endif
using namespace std;
typedef long long ll;

const double PI = acos(-1.0);

void Approach()
{
    double a, b, c;
    cin >> a >> b >> c;
    double ax = asin(a);
    double bx = asin(b);
    double cx = asin(c);
    int t1 = ax * (180 / (acos(-1))) + 1;
    int t2 = bx * (180 / (acos(-1))) + 1;
    int t3 = bx * (180 / (acos(-1))) + 1;
    cout << max({t1, t2, t3}) << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    cin >> T;
    for (int C = 1; C <= T; C++)
    {
        Approach();
    }
    return 0;
}