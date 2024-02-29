// Author:  Rajesh Biswas
// Date  :  05.11.2023

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
//------------------------------------------------------------------------------------
void solve(void)
{
    ll a, b, s, tmp;
    cin >> a >> b;
    s = a + b;
    tmp = 0;
    while (s > 0)
    {
        if (s % 10 != 0)
            tmp = (tmp * 10) + (s % 10);
        s /= 10;
    }
    s = 0;
    while (tmp > 0)
    {
        s = (s * 10) + (tmp % 10);
        tmp /= 10;
    }
    tmp = 0;
    while (a > 0)
    {
        if (a % 10 != 0)
            tmp = (tmp * 10) + (a % 10);
        a /= 10;
    }
    a = 0;
    while (tmp > 0)
    {
        a = (a * 10) + (tmp % 10);
        tmp /= 10;
    }
    tmp = 0;
    while (b > 0)
    {
        if (b % 10 != 0)
            tmp = (tmp * 10) + (b % 10);
        b /= 10;
    }
    b = 0;
    while (tmp > 0)
    {
        b = (b * 10) + (tmp % 10);
        tmp /= 10;
    }
    if (a + b == s)
        YES;
    else
        NO;
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
