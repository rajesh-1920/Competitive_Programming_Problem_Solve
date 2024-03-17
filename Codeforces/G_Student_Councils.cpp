// Author:  Rajesh Biswas
// Date  :  17.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, k, i, x, res = 0;
    cin >> k >> n;
    multiset<ll> s;
    while (n--)
    {
        cin >> x;
        s.insert(x);
    }
    while (s.size() >= k)
    {
        auto it = --s.end();
        x = k;
        multiset<ll> s1;
        while (x--)
        {
            i = *it;
            s.erase(it--);
            if (i > 1)
                s1.insert(i - 1);
        }
        if (s1.size() > 0)
            s.insert(s1.begin(), s1.end());
        res++;
    }
    cout << res;
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
