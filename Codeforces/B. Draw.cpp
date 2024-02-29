// Author:  Rajesh Biswas
// Date  :  01.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

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
    ll n, cnt = 1, mn = 0, x, y, i;
    cin >> n;
    vecp a;
    a.ppb(0, 0);
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.ppb(x, y);
    }
    y = 0;
    for (i = 1; i <= n; i++)
    {
        if ((a[i].fi == a[i - 1].fi) && (a[i].sc == a[i - 1].sc))
            continue;
        if (a[i].fi == a[i - 1].fi)
        {
            if (a[i - 1].sc < a[i - 1].fi && a[i].sc > a[i].fi)
                cnt++;
            y = a[i].fi;
        }
        else if (a[i].sc == a[i - 1].sc)
        {
            if (a[i - 1].fi < a[i - 1].sc && a[i].fi > a[i].sc)
                cnt++;
            y = a[i].sc;
        }
        else
        {
            if (a[i].fi >= a[i - 1].sc && a[i].sc >= a[i - 1].fi)
            {
                x = a[i].sc - a[i - 1].sc;
                x = min(x, a[i].fi - a[i - 1].fi);
                cnt += x;
            }
        }
    }
    cout << cnt;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
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