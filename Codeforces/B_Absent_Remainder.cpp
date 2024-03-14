// Author:  Rajesh Biswas
// Date  :  14.03.2024

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
    ll n, i, x, j, cnt = 0;
    cin >> n;
    vector<ll> a;
    map<ll,ll>mp;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.pb(x);
        mp[x]++;
    }
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++)
        for (j = n - 1; j >= 0; j--)
        {
            if (a[i] >= a[j])
                break;
            x = a[j] % a[i];
            if (mp[x]==0)
            {
                cnt++;
                cout << a[j] << ' ' << a[i];
                nl;
            }
            if (cnt == (n / 2))
                rrr;
        }
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
/*
    for(auto &x:v)cin>>x;
*/