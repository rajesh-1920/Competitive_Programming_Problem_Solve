// Author:  Rajesh Biswas
// Date  :  18.01.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) x.begin(), x.end()
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
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
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, x, y, m, t1, t2;
    cin >> n;
    ll a[n], t[n], r[n+1], k[n+1];
    for (i = 0; i < n; i++)
        cin >> a[i];

    t[0] = 1;
    r[0] = 0;
    r[1] = 1;
    for (i = 1; i < n - 1; i++)
    {
        t1 = 1LL * abs(a[i] - a[i + 1]);
        t2 = 1LL * abs(a[i] - a[i - 1]);
        if (t1 <= t2)
            t[i] = 1;
        else
            t[i] = t1;
        r[i + 1] = r[i] + t[i];
    }


    t[n - 1] = 1;
    k[n - 1] = 0;
    k[n - 2] = 1;
    for (i = n - 2; i > 0; i--)
    {
        t1 = 1LL * abs(a[i] - a[i - 1]);
        t2 = 1LL * abs(a[i] - a[i + 1]);
        if (t1 <= t2)
            t[i] = 1;
        else
            t[i] = t1;
        k[i-1] = k[i] + t[i];
    }

    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        x--;
        y--;
        if (x <= y)
        {
            cout << r[y] - r[x];
        }
        else
        {
            cout << k[y] - k[x];
        }
        nl;
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
/*
    for(auto &x:v)cin>>x;
*/