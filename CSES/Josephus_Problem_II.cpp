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
    ll n, k, i, x;
    cin >> n >> k;
    ordered_set<ll> s;
    for (i = 1; i <= n; i++)
        s.insert(i);
    auto it = s.begin();
    while (s.size() > 0)
    {
        x = k % s.size();
        while (x--)
        {
            it++;
            if (it == s.end())
                it = s.begin();
        }
        i = *it;
        cout << i << ' ';
        it++;
        if (it == s.end())
            it = s.begin();
        s.erase(s.find(i));
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
