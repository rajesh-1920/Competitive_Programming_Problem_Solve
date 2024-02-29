// Author:  Rajesh Biswas
// Date  :  28.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
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
    ll m, n, x;
    cin >> n >> m;
    vector<ll> a;
    vector<ll>::iterator it;
    while (n--)
    {
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(), a.end());
    while (m--)
    {
        cin >> x;
        if (a.size() > 0 && a.front() <= x)
        {
            it = lower_bound(a.begin(), a.end(), x);
            while (true)
            {
                if (it == a.begin())
                {
                    if ((*it) <= x)
                    {
                        cout << (*it);
                        a.erase(it);
                    }
                    else
                        cout << -1;
                    nl;
                    break;
                }
                if (it != a.end())
                    if ((*it) <= x)
                    {
                        cout << (*it);
                        nl;
                        a.erase(it);
                        break;
                    }
                it--;
            }
        }
        else
        {
            cout << -1;
            nl;
        }
    }
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