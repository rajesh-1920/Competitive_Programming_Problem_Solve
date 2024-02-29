// Author:  Rajesh Biswas
// Date  :  29.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
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
void solve()
{
    ll n, i, j, cnt = 0, ca = 0, cb = 0, x, y, fl = 0;
    cin >> n;
    vector<ll> ta, tb;
    string a, b, r;
    cin >> a >> b;
    ta.pb(0);
    tb.pb(0);
    for (i = 0; i < n; i++)
    {
        if (a[i] == '0')
            ca++;
        if (b[i] == '0')
            cb++;
        ta.pb(ca);
        tb.pb(cb);
    }
    j = 0;
    r.pb(a[0]);
    for (i = 1; i < n; i++)
    {
        x = ca - ta[i - 1];
        y = cb - tb[i - 1];
        if (y == x)
        {
            if (b[i] == '0')
            {
                j = i;
                r.pb(b[j]);
                break;
            }
        }
        if (y > x)
        {
            if (b[i] == '0')
            {
                j = i;
                r.pb(b[j]);
                break;
            }
        }
        if (a[i] == a[j])
            cnt++;
        r.pb(a[i]);
        j++;
    }
    i = j - 1;
    while (j < n)
    {
        x = ca - ta[j - 1];
        y = cb - tb[j - 1];
        if (y == x)
            if (a[i] == a[j])
                cnt++;
        r.pb(b[j]);
        j++;
        i++;
    }
    cout << r;
    nl;
    if (cnt > 1 || cnt == n - 1)
    {
        if (cnt * 2 <= n)
            cnt += cnt;
        else if (cnt == n - 1)
            cnt++;
    }
    cout << cnt;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
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
/*
    for(auto &x:v)cin>>x;
*/