// Author:  Rajesh Biswas
// Date  :  03.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n, i, j, dis=0;
    cin >> n;
    ll a[2 * n];
    vector<pair<ll, ll>> res;

    for (i = 0; i < 2 * n ; i++)
        cin >> a[i];
    sort(a, a + (2 * n));

    for (i = 0, j = n; i < n; i++, j++)
    {
        res.push_back({a[i], a[j]});
        if (i > 0)
            dis += (abs(a[i] - a[i - 1]) + abs(a[j] - a[j - 1]));
    }
    
    cout<<dis<<'\n';
    for (auto it : res)
        cout << it.first << ' ' << it.second << '\n';
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}