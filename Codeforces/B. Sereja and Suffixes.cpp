// Author:  Rajesh Biswas
// Date  :  02.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fi first
#define sc second
#define vecp vector<pair<ll, ll>>
void solve(void)
{
    ll n, m, x, i;
    map<ll, ll> mp;
    cin >> n >> m;
    ll s[n], a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = n - 1; i >= 0; i--)
    {
        mp[a[i]]++;
        s[i] = mp.size();
    }
    while (m--)
    {
        cin >> x;
        cout << s[x - 1] << '\n';
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
