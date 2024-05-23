// Author:  Rajesh Biswas
// Date  :  19.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2009
#define MOD 1000000007
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
int c1[32], c0[32];
int l;
void bin_rep(int x)
{
    int i = 0;
    for (i = 0; i < l; i++)
    {
        if (x & 1)
            c1[i]++;
        else
            c0[i]++;
        if (x > 0)
            x >>= 1;
    }
}
void solve(void)
{
    for (int i = 0; i < 32; i++)
        c1[i] = c0[i] = 0;
    int n;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bin_rep(x);
    }
    int res = 0;
    for (int i = 0; i < l; i++)
    {
        if (c1[i] > c0[i])
            res |= (1 << i);
    }
    cout << res;
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
