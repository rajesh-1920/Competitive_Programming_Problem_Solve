// Author:  Rajesh Biswas
// Date  :  24.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define rev(X) reverse(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lwr(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upr(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
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
void solve(void)
{
    ll n, i, x;
    cin >> n;
    vec l, v;
    set<ll> r;
    set<ll>::iterator it;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        l.pb(x);
    }
    for (i = 0; i < n; i++)
    {
        cin >> x;
        r.insert(x);
    }
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
    }
   
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
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