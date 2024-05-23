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
    ll n, i, j, k, l, r, t1, t2, m;
    cin >> n;
    ll a[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cin >> k;
    while (k--)
    {
        cin >> l >> r;
        i = -1;
        j = n;
        while (i + 1 < j)
        {
            m = (i + j) / 2;
            if (a[m] < l)
                i = m;
            else
                j = m;
        }
        t1 = i;
        i = -1;
        j = n;
        while (i + 1 < j)
        {
            m = (i + j) / 2;
            if (a[m] > r)
                j = m;
            else
                i = m;
        }
        t2 = j;
        cout << (t2 - t1) - 1 << ' ';
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
