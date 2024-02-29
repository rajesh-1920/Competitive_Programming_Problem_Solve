// Author:  Rajesh Biswas
// Date  :  04.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n, i, tp, l, r, m, sum = 0, x;
    cin >> n;
    vector<ll> a, s, si;
    s.push_back(sum);
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        sum += x;
        s.push_back(sum);
    }
    sort(a.begin(), a.end());
    sum = 0;
    si.push_back(sum);
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        si.push_back(sum);
    }
    cin >> m;
    while (m--)
    {
        cin >> tp >> l >> r;
        if (tp == 1)
            cout << s[r] - s[l - 1] << '\n';
        else
            cout << si[r] - si[l - 1] << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}