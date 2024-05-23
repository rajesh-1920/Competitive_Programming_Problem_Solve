// Author:  Rajesh Biswas
// Date  :  05.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);

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
void solve(void)
{
    ll n, x, y, mx = 0, i, t, mn;
    cin >> n;
    vecp a;
    a.ppb(0, 0);
    for (i = 1; i <= n; i++)
    {
        mn = 1e12;
        cin >> x >> y;
        a.ppb(x, y);
        t = 1l * abs(((double)a[i - 1].fi) - ((double)a[i].fi));
        mn = min(mn, t);
        t = 1l * abs(((double)a[i - 1].fi) - ((double)a[i].sc));
        mn = min(mn, t);
        t = 1l * abs(((double)a[i - 1].sc) - ((double)a[i].fi));
        mn = min(mn, t);
        t = 1l * abs(((double)a[i - 1].sc) - ((double)a[i].sc));
        mn = min(mn, t);
        mx = max(mx, mn);
    }
    cout << mx;
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