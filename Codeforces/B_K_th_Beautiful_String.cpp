// Author:  Rajesh Biswas
// Date  :  23.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
    ll n, k, t, ca, cb = 0, cnt = 1;
    cin >> n >> k;
    ca = n - 2;
    string s = "";
    while (true)
    {
        if (cb == 2)
        {
            while (s.size() < n)
                s.push_back('a');
            cout << s;
            nl;
            rrr;
        }
        if (!ca)
        {
            while (s.size() < n)
                s.push_back('b');
            cout << s;
            nl;
            rrr;
        }
        t = 2 - cb;
        if (cb)
        {
            if (k <= (n - cnt + 1)*(cnt-1))
            {
                s.push_back('a');
                ca--;
            }
            else
            {
                s.push_back('b');
                cb++;
            }
        }
        else
        {
            if (k <= ((n - cnt) * (n - cnt - 1) / t))
            {
                s.push_back('a');
                ca--;
            }
            else
            {
                s.push_back('b');
                cb++;
            }
        }
        cnt++;
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
