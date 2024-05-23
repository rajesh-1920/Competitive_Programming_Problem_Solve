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
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, temp;
    cin >> n;
    vector<string> res;
    temp = n / 4;
    for (i = 0; i < temp; i++)
        res.pb("abcd");
    n = n % 4;
    if (n == 1)
        res.pb("a");
    else if (n == 2)
        res.pb("ab");
    else if (n == 3)
        res.pb("abc");
    else if (n == 4)
        res.pb("abcd");
    for (auto it : res)
        cout << it;
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
