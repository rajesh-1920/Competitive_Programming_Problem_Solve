// Author:  Rajesh Biswas
// Date  :  24.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
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
    ll n, i, cnt = 0, x, c2 = 0, c4 = 0;
    cin >> n;
    vector<ll> a(n), a4(n, 0), a2(n, 0);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] == 4)
            c4++;
        if (a[i] == 2)
            c2++;
        a4[i] = c4;
        a2[i] = c2;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 4)
            cnt += (a4[i] - 1);
        if (a[i] == 6)
            cnt += a2[i];
    }
    cout << cnt;
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
/*
    for(auto &x:v)cin>>x;
*/
