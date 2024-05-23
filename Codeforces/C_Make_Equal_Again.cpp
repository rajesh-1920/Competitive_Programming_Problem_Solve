// Author:  Rajesh Biswas
// Date  :  13.02.2024

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
    ll n, i, j, mx = 0, mn = 1LL * 1e9, cnt1 = 0, cnt2 = 0;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(a[i], mx);
        mn = min(mn, a[i]);
    }
    if (mn == mx)
    {
        cout << 0;
        nl;
        rrr;
    }
    for (i = 0; i < n; i++)
    {
        if (a[0] != a[i])
        {
            mn = i;
            break;
        }
        cnt1++;
    }
    for (j = n - 1; j >= 0; j--)
    {
        if (a[j] != a[n - 1])
        {
            mx = j;
            break;
        }
        cnt2++;
    }
    if (cnt1 >= cnt2)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (a[j] != a[0])
            {
                cout << j - mn + 1;
                nl;
                rrr;
            }
        }
    }
    else
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] != a[n - 1])
            {
                cout << mx - j + 1;
                nl;
                rrr;
            }
        }
    }
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
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