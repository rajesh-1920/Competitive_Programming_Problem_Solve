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
ll lucky(ll n)
{
    ll cc = 0;
    while (n > 0)
    {
        if (n % 10 == 4)
            cc++;
        else if (n % 10 == 7)
            cc++;
        n /= 10;
    }
    return cc;
}
void solve(void)
{
    ll n, k, cnt = 0, x;
    cin >> n >> k;
    while (n--)
    {
        cin >> x;
        if (lucky(x) <= k)
            cnt++;
    }
    cout << cnt;
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
