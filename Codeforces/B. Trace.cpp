// Author:  Rajesh Biswas
// Date  :  14.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define pi 3.141592653589793238462643383279502884197
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
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll i, n, cnt = 0;
    cin >> n;
    long double a[n], sum = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = n - 1; i >= 0; i--)
    {
        if (cnt % 2 == 0)
            sum += (a[i] * a[i] * pi);
        else
            sum -= (a[i] * a[i] * pi);
        cnt++;
    }
    cout << sum;
    nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin >> test;
    cout << fixed << showpoint << setprecision(10);
    while (test--)
        solve();
    return 0;
}
