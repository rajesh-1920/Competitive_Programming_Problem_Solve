// Author:  Rajesh Biswas
// Date  :  17.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s;
    ll m, i, x, y, res = 0;
    cin >> s >> m;
    ll a[s.size() + 10];
    a[0] = 0;
    for (i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            res++;
        a[i + 1] = res;
    }
    a[i + 1] = res;
    while (m--)
    {
        cin >> x >> y;
        cout << a[y - 1] - a[x - 1] << '\n';
    }
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
