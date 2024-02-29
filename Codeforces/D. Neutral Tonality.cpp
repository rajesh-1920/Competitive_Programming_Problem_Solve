// Author:  Rajesh Biswas
// Date  :  11.11.2023

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
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, x, i, j;
    cin >> n >> m;
    vec a, b;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.pb(x);
    }
    for (i = 0; i < m; i++)
    {
        cin >> x;
        b.pb(x);
    }
    srt(b);
    for (i = m - 1; i >= 0; i--)
    {
        if (b[i] < a[0])
            break;
        cout << b[i] << ' ';
        b.pop_back();
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
        x = b.size();
        if (i < n - 1)
        {
            for (j = x - 1; j >= 0; j--)
            {
                if (b[j] < a[i + 1])
                    break;
                cout << b[j] << ' ';
                b.pop_back();
            }
        }
    }
    rsrt(b);
    for (auto it : b)
        cout << it << " ";
    nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
