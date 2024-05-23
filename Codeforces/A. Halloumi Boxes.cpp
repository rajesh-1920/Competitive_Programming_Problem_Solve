// Author:  Rajesh Biswas
// Date  :  30.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, k, i, t;
    cin >> n >> k;
    vec a, b;
    t = n;
    while (n--)
    {
        cin >> i;
        a.pb(i);
        b.pb(i);
    }
    n = t;
    /*for (i = 0; i <= (n - k); i++)
    {
        sort(a.begin() + i, a.begin() + i + k);
    }
    srt(b);
    if (a == b)
        YES;
    else
        NO;*/
    if (k == 1)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                NO;
                rrr;
            }
        }
    }
    YES;
}
//--------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/