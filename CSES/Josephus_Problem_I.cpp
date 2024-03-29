// Author:  Rajesh Biswas
// Date  :  01.03.2024

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
    ll n, i;
    cin >> n;
    vector<ll> v;
    for (i = 1; i <= n; i++)
        v.push_back(i);
    while (v.size() > 1)
    {
        vector<ll> temp;
        for (i = 0; i < v.size(); i++)
        {
            if (i & 1)
                cout << v[i] << ' ';
            else
                temp.push_back(v[i]);
        }
        if (v.size() & 1)
        {
            ll x = temp.back();
            v.clear();
            v.push_back(x);
            temp.pop_back();
            v.insert(v.begin() + 1, temp.begin(), temp.end());
        }
        else
            v = temp;
    }
    cout<<v[0];
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
