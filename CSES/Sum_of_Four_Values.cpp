// Author:  Rajesh Biswas
// Date  :  27.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
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
void solve(void)
{
    ll n, tar, i, x, k, j, l, s;
    cin >> n >> tar;
    vector<pair<ll, ll>> v;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        v.ppb(x, i);
    }
    sort(v.begin(), v.end());
    for (l = 0; l < n; l++)
    {
        if (v[l].fi > tar)
            break;
        for (k = l + 1; k < n; k++)
        {
            x = tar - v[l].fi - v[k].fi;
            if (x <= 0)
                break;
            i = k + 1;
            j = n - 1;
            s = 0;
            while (i < j)
            {
                s = v[i].fi + v[j].fi;
                if (s == x)
                {
                    cout << v[i].sc << ' ' << v[j].sc << ' ' << v[k].sc << ' ' << v[l].sc;
                    rrr;
                }
                else if (s < x)
                    i++;
                else
                    j--;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
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
/*
    for(auto &x:v)cin>>x;
*/