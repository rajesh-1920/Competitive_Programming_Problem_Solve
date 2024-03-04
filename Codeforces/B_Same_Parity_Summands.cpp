// Author:  Rajesh Biswas
// Date  :  04.03.2024

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

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, k, i;
    cin >> n >> k;
    if (k > n)
    {
        NO;
        rrr;
    }
    if (n % k == 0)
    {
        YES;
        i = n / k;
        while (k--)
            cout << i << ' ';
        nl;
        rrr;
    }
    if (n & 1)
    {
        if (k % 2 == 0)
        {
            NO;
            rrr;
        }
        YES;
        for (i = 1; i < k; i++)
            cout << 1 << ' ';
        cout << (n - k + 1);
        nl;
        rrr;
    }
    else
    {
        if (k & 1)
        {
            k--;
            i = n - (k * 2);
            if (i < 2 || (i & 1))
            {
                NO;
                rrr;
            }
            YES;
            while (k--)
                cout << 2 << ' ';
            cout << i;
            nl;
            rrr;
        }
        YES;
        for (i = 1; i < k; i++)
            cout << 1 << ' ';
        cout << (n - k + 1);
        nl;
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
