// Author:  Rajesh Biswas
// Date  :  26.11.2023

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
    ll n, i, cnt = 0, res = 0;
    string s;
    cin >> n >> s;
    for (i = 0; i < n;)
    {
        if (s[i] == '#')
        {
            i++;
            continue;
        }
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.' && i < n - 2)
        {
            cout << 2;
            nl;
            rrr;
        }
        else if (s[i] == '.')
        {
            cnt++;
            i++;
        }
    }
    cout << cnt;
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