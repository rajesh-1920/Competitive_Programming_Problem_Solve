// Author:  Rajesh Biswas
// Date  :  04.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define fi first
#define sc second
#define pb(x) push_back(x);

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, a, b, g, i;
    cin >> a >> b >> n;
    for (i = 0;; i++)
    {
        if (i % 2 == 0)
        {
            g = __gcd(a, n);
            if (g > n)
            {
                cout << 1 << '\n';
                return;
            }
            n -= g;
        }
        else
        {
            g = __gcd(b, n);
            if (g > n)
            {
                cout << 0 << '\n';
                return;
            }
            n -= g;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
