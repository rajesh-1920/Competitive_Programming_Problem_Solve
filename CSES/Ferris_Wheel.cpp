// Author:  Rajesh Biswas
// Date  :  26.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
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
    ll n, x, i, j, cnt = 0;
    cin >> n >> x;
    vector<ll> a;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        if (j == x)
            cnt++;
        else if (j < x)
            a.pb(j);
    }
    sort(a.begin(), a.end());
    j = a.size();
    j--;
    i = 0;
    while (true)
    {
        if (i > j)
            break;
        if (a[j] + a[i] > x)
            j--;
        else
        {
            j--;
            i++;
        }
        cnt++;
    }
    cout << cnt;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
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
