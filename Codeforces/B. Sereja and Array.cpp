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

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, x, v, temp = 0;
    cin >> n >> m;
    vec a;
    while (n--)
    {
        cin >> x;
        a.pb(x);
    }
    while (m--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> v >> n;
            a[v - 1] = n - temp;
        }
        else if (x == 2)
        {
            cin >> v;
            temp += v;
        }
        else
        {
            cin >> n;
            cout << a[n - 1] + temp;
            nl;
        }
    }
}
//------------------------------------------------------------------------------------
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
