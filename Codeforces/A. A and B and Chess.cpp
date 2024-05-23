// Author:  Rajesh Biswas
// Date  :  18.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define rev(X) reverse(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define fl(i, b, n) for (ll i = b; i < n; i++)

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

// #define dissp(n) for(auto i:n)cout<<i<<" ";cout<<'\n';
// #define dis(n) for(auto i:n)cout<<i<<'\n';
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
ll va(char ch)
{
    if (ch == 'Q')
        return 9;
    if (ch == 'R')
        return 5;
    if (ch == 'B' || ch == 'N')
        return 3;
    if (ch == 'P')
        return 1;
    if (ch == 'q')
        return -9;
    if (ch == 'r')
        return -5;
    if (ch == 'b' || ch == 'n')
        return -3;
    if (ch == 'p')
        return -1;
    return 0;
}
void solve(void)
{
    ll i, j, p = 0;
    string s;
    for (j = 0; j < 8; j++)
    {
        cin >> s;
        for (i = 0; i < 8; i++)
            p += (va(s[i]));
    }
    cout << ((p == 0) ? "Draw" : ((p > 0) ? "White" : "Black"));
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
    fl(T, 0, test)
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