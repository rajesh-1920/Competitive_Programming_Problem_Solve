// Author:  Rajesh Biswas
// Date  :  11.12.2023

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
    double m[5], w[5], h1 = 500, h2, v[5], sum = 0;
    ll i;
    fl(i, 0, 5)
    {
        cin >> m[i];
        v[i] = h1;
        h1 += 500;
    }
    fl(i, 0, 5)
    {
        cin >> w[i];
    }
    cin >> h1 >> h2;
    fl(i, 0, 5)
    {
        sum += max((0.3 * v[i]), (((1 - (m[i] / 250)) * v[i]) - (50 * w[i])));
    }
    sum += (h1 * 100);
    sum -= (h2 * 50);
    cout << sum;
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << noshowpoint << setprecision(0);
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