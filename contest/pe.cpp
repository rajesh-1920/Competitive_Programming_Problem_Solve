// Author:  Rajesh Biswas
// Date  :  23-02-2024

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

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, x, N = 1LL * 1e18;
    cin >> n;
    vec a, b, c;
    vec t;
    set<ll> tt;
    for (i = 1; i <= n; i++)
        tt.insert(i);
    for (i = 0; i < n / 2; i++)
    {
        cin >> x;
        c.pb(x);
    }
    for (i = 0; i < n / 2; i++)
    {
        {
            auto it = next(tt.begin(), c[i] - 1);
            a.pb(*it);
            
        }
        cin >> x;
        {
            auto it = next(tt.begin(), x - 1);
            b.pb(*it);
            tt.erase(it);
        }
    }
    for (auto it : a)
        cout << it << ' ';
    nl;
    for (auto it : b)
        cout << it << ' ';
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cout << fixed << noshowpoint << setprecision(0);
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/