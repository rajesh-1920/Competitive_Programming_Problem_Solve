// Author:  Rajesh Biswas
// Date  :  20.11.2023

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
    ll n, i, p, pb;
    string s;
    cin >> n >> s;
    p = pb = -1;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            p = i;
            break;
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            pb = i;
            break;
        }
    }
    n = 0;
    if (pb == -1 || p == -1)
        pb = p = 0;
    cout << max(n, (pb - p));
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/