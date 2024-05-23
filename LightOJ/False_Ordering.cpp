// Author:  Rajesh Biswas
// Date  :  03.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 1000000
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define no cout << "no\n"
#define yes cout << "yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.fi > b.fi)
        return false;
    else if (a.fi < b.fi)
        return true;
    else
        return (a.sc > b.sc);
}
vector<pair<ll, ll>> a;
void dp()
{
    ll i, j, n = 1000, cnt;
    for (i = 1; i <= n; i++)
    {
        cnt = 0;
        for (j = 1; j * j <= i + 1; j++)
        {
            if (i % j == 0)
            {
                cnt++;
                if (j != i / j)
                    cnt++;
            }
        }
        a.ppb(cnt, i);
    }
}
void solve()
{
    ll n;
    cin >> n;
    cout << a[n - 1].sc;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(2);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp();
    sort(a.begin(), a.end(), cmp);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        cout << "Case " << T << ": ";
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
