// Author:  Rajesh Biswas
// Date  :  25.01.2024

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
    ll n, d, t, cnt = 0, m = 1;
    cin >> n;
    if (n == 0)
    {
        cout << 8;
        rrr;
    }
    if (n < 0)
    {
        m = -1;
        n *= -1;
    }
    t = n;
    vec a;
    while (t > 0)
    {
        if (t % 10 == 8)
            cnt++;
        a.pb(t % 10);
        t /= 10;
    }
    if ((cnt > 1) || (cnt == 1 && m == 1 && a[0] < 8) || (cnt == 1 && m == -1 && a[0] != 0 && a[0] != 8))
    {
        cout << 1;
        rrr;
    }
    if (m == 1)
    {
        if (a[0] < 8)
            cout << 8 - a[0];
        else if (a[0] == 8)
        {
            if (a.size() > 1)
            {
                if (a[1] == 7)
                {
                    cout << 2;
                    rrr;
                }
            }
            cout << 10;
        }
        else
        {
            if (a.size() > 1)
            {
                if (a[1] == 7)
                {
                    cout << 1;
                    rrr;
                }
            }
            cout << 9;
        }
    }
    else
    {
        if (a[0] == 9)
        {
            cout << 1;
            rrr;
        }
        if (a.size() > 1)
        {
            if (a[1] == 9)
            {
                cout << 1 + a[0];
                rrr;
            }
            cout << 10 - 8 + a[0];
        }
        else
            cout << 8 + a[0];
    }
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
/*
    for(auto &x:v)cin>>x;
*/