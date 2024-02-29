// Author:  Rajesh Biswas
// Date  :  19.11.2023

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
    ll a, b, x, y;
    cin >> a >> b;
    x = max(a, b);
    b = y = min(a, b);
    if (y % 2 == 0)
    {
        a = x - y;
        x = x - a - 2;
    }
    else
    {
        a = x - y - 1;
        x = x - a - 2;
    }
    cout << a << ' ' << b << '\n';
    a += (y / 2);
    //a += (x / 2);
    //cout << a << ' ' << b << '\n';
}
//------------------------------------------------------------------------------------
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
/*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/