// Author:  Rajesh Biswas
// Date  :  15.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) x.begin(), x.end()
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
#define pi 3.141592653589793238462643383279502884197

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
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, k, d;
    cin >> n >> k;

    if (k < n * 2)
    {
        if (k % 2 == 0)
            d = k / 2;
        else
            d = (k + 1) / 2;
    }
    else
    {
        d = n;
        k -= (n * 2);
        if (k <= ((n - 2) * 2))
        {
            if (k % 2 == 0)
                d += k / 2;
            else
                d += (k + 1) / 2;
        }
        else
        {
            d += (n - 2);
            k -= ((n - 2) * 2);
            if (k == 1)
                d++;
            if (k == 2)
                d += 2;
        }
    }
    cout << d;
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
        // cout << "Case " << T << " : ";
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
