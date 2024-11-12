// Author:  Rajesh Biswas
// Date  :  09.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (i = st; i < end; i++)
#define ft(i, st, end) for (i = st; i < end; i++)

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
    ll n;
    cin >> n;
    ll a[n], aa = 0, b = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll t = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1 && a[i] == 1)
        {
            // if (aa > b)
            //     b++;
            // else if (aa < b)
            //     aa++;
            // else
                t++;
        }
        else if (x == -1 && a[i] == -1)
        {
            // if (aa > b)
            //     aa--;
            // else if (aa < b)
            //     b--;
            // else
                m++;
        }
        else if (x < a[i])
            aa += a[i];
        else if (x > a[i])
            b += x;
    }
    while (t)
    {
        if (aa >= b)
            b++;
        else
            aa++;
        t--;
    }
    while (m)
    {
        if (aa <= b)
            b--;
        else
            aa--;
        m--;
    }
    cout << min(aa, b);
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
