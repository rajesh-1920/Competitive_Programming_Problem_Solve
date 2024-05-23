// Author:  Rajesh Biswas
// Date  :  10.11.2023

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

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll a, b, c, d, t1, t2;
    cin >> a >> b >> c >> d;
    t1 = max(((3 * a) / 10), (a - ((a / 250) * c)));
    t2 = max(((3 * b) / 10), (b - ((b / 250) * d)));
    if (t1 == t2)
        cout << "Tie\n";
    else if (t1 > t2)
        cout << "Misha\n";
    else
        cout << "Vasya\n";
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
