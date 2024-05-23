// Author:  Rajesh Biswas
// Date  :  09.11.2023

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
    ll n, x, i, j, cp = 1, res = 0, temp;
    vecp a;
    cin >> n >> x;
    while (n--)
    {
        cin >> i >> j;
        a.ppb(i, j);
    }
    srt(a);
    for (auto it : a)
    {
        if (it.fi >= cp)
        {
            temp = it.fi - cp;
            res += (temp / x);
            cp = it.sc+1;
        }
    }
    cout << (a[(a.size()) - 1].sc) - (res * x);
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
