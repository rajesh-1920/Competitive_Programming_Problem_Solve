// Author:  Rajesh Biswas
// Date  :  30.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
    vector<pair<int, pair<int, int>>> vp, vt;
    vp.push_back({0, {0, 0}});
    vt.push_back({0, {0, 0}});
    int n, m;
    cin >> n >> m;
    int p[n + m + 5], t[m + n + 5], ans1[n + m + 5], ans2[n + m + 5];
    for (int i = 1; i <= n + m + 1; i++)
        cin >> p[i];
    for (int i = 1; i <= n + m + 1; i++)
    {
        cin >> t[i];
        vp.push_back({p[i], {t[i], i}});
        vt.push_back({t[i], {p[i], i}});
    }
    sort(vp.begin(), vp.end());
    sort(vt.begin(), vt.end());
    {
        ll mt = 0, mp = 0;
        for (int i = 1; i <= m; i++)
            mt += vp[i].sc.fi;
        for (int i = m + 2; i <= n + m + 1; i++)
            mp += vp[i].fi;
        for (int i = 1; i <= n + m + 1; i++)
        {
            if (vp[i].sc.sc == m + 1)
                ans1[i] = mp + mt;
            else if (vp[i].sc.sc < m + 1)
                ans1[i] = mp + mt - (vp[i].sc.fi) + vp[m].sc.fi;
            else
                ans1[i] = mp + mt - (vp[i].fi) + vp[m].fi;
        }
    }
    {
        ll mt = 0, mp = 0;
        for (int i = 1; i <= m; i++)
            mp += vt[i].sc.fi;
        for (int i = m + 2; i <= n + m + 1; i++)
            mt += vt[i].fi;
        for (int i = 1; i <= n + m + 1; i++)
        {
            if (vt[i].sc.sc == m + 1)
                ans2[i] = mp + mt;
            else if (vp[i].sc.sc < m + 1)
                ans2[i] = mp + mt - (vt[i].sc.fi) + vt[m].sc.fi;
            else
                ans2[i] = mp + mt - (vt[i].fi) + vt[m].fi;
        }
    }

    for (int i = 1; i <= n + m + 1; i++)
        cout << ans1[i] << ' ';
    nl;
    for (int i = 1; i <= n + m + 1; i++)
        cout << ans2[i] << ' ';
    nl;
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
