// Author:  Rajesh Biswas
// Date  :  12.10.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(void)
{
    ll n, k, i, res = 0;
    string s;
    cin >> n >> k >> s;
    map<char, ll> mp;
    for (i = 0; i < n; i++)
        mp[s[i]]++;
    vector<ll> a;
    for (auto it : mp)
        a.push_back(it.second);
    sort(a.rbegin(), a.rend());
    for (i = 0;; i++)
    {
        if (a[i] >= k)
        {
            res += (k * k);
            break;
        }
        res += (a[i] * a[i]);
        k -= a[i];
    }
    cout << res << '\n';
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
