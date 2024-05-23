// Author:  Rajesh Biswas
// Date  :  07.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "No\n";
#define yes cout << "Yes\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define nl cout << "\n";
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, mx = 0, i, j, s1, t;
    cin >> n;
    ll sum[n];
    for (i = 0; i < n; i++)
    {
        cin >> j;
        if (i == 0)
            sum[i] = j;
        else
            sum[i] = sum[i - 1] + j;
    }
    i = 0;
    j = n - 1;
    for (t = 0;; t++)
    {
        if (j == i)
            break;
        s1 = sum[n - 1] - sum[j - 1];
        if (s1 == sum[i])
            mx = max(s1, mx);
        i++;
        s1 = sum[n - 1] - sum[j - 1];
        if (s1 == sum[i])
            mx = max(s1, mx);
        j--;
        s1 = sum[n - 1] - sum[j - 1];
        if (s1 == sum[i])
            mx = max(s1, mx);
    }
    cout << mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
