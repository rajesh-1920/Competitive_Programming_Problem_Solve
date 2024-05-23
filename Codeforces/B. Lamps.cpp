// Author:  Rajesh Biswas
// Date  :  04.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define pa pair<ll, ll>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, a, b, i, sum = 0, j, l;
    cin >> n;
    vector<ll> v[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[a].pb(b);
    }
    for (i = 1; i <= n; i++)
    {
        sort(v[i].rbegin(), v[i].rend());
        l = v[i].size();
        for (j = 0; j < (min(l, i)); j++)
            sum += v[i][j];
    }
    cout << sum;
    nl;
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
