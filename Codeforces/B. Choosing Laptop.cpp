// Author:  Rajesh Biswas
// Date  :  14.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
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
void solve(void)
{
    ll n, i, j, res;
    cin >> n;
    ll a[n], b[n], c[n], d[n];
    for (i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] > a[j] && b[i] > b[j] && c[i] > c[j])
                a[j] = b[j] = c[j] = -1;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (a[i] > a[j] && b[i] > b[j] && c[i] > c[j])
                a[j] = b[j] = c[j] = -1;
        }
    }
    j = 1e15;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0 && b[i] > 0 && c[i] > 0)
        {
            if (j > d[i])
            {
                j = d[i];
                res = i + 1;
            }
        }
    }
    cout << res;
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