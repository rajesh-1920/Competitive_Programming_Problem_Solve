// Author:  Rajesh Biswas
// Date  :  07.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) x.begin(), x.end()
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
#define pi 3.141592653589793238462643383279502884197

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
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, j, l, r, q, t;
    cin >> n;
    ll a[n + 1];
    a[1] = 0;
    cin >> t;
    for (i = 2; i <= n; i++)
    {
        cin >> j;
        if (t == j)
            a[i] = a[i - 1];
        else
        {
            t = j;
            a[i] = i - 1;
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        if (a[r] < l)
            cout << -1 << ' ' << -1;
        else
            cout << a[r] << ' ' << r;
        nl;
    }
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
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
/*
    for(auto &x:v)cin>>x;
*/