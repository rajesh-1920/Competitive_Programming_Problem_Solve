// Author:  Rajesh Biswas
// Date  :  15.03.2024

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
    ll n, i, t1, t2, temp;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    bool fl = false;
    for (i = n - 1;; i--)
    {
        if (fl)
        {
            if (i < 0)
                break;
            if (a[i] < 10)
            {
                if (t2 < a[i])
                {
                    NO;
                    rrr;
                }
                t2 = a[i];
            }
            else
            {
                t1 = a[i] % 10;
                if (t1 > t2)
                {
                    NO;
                    rrr;
                }
                t2 = t1;
                t1 = a[i] / 10;
                if (t1 > t2)
                {
                    NO;
                    rrr;
                }
                t2 = t1;
            }
        }
        else
        {
            if (i == 0)
                break;
            if (a[i] < a[i - 1])
            {
                fl = true;
                t2 = a[i - 1] % 10;
                t1 = a[i - 1] / 10;
                if (t1 > t2 || a[i] < t2)
                {
                    NO;
                    rrr;
                }
                i--;
                if (t1 > 0)
                    t2 = t1;
            }
        }
    }
    YES;
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
