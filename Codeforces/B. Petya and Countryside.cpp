// Author:  Rajesh Biswas
// Date  :  15.11.2023

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

// #define dissp(n) for(auto i:n)cout<<i<<" ";cout<<'\n';
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, mx = 1, cnt = 1, j;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n - 1; j++)
        {
            if (a[j] >= a[j + 1])
                cnt++;
            else
                break;
        }
        for (j = i; j > 0; j--)
        {
            if (a[j] >= a[j - 1])
                cnt++;
            else
                break;
        }
        mx = max(mx, cnt);
        cnt = 1;
    }
    cout << mx;
    nl;
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
