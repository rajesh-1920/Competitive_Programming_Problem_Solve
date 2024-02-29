// Author:  Rajesh Biswas
// Date  :  18.02.2024

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
    ll n, m, i, cnt = 0, temp, p = 1, j, k;
    string s;
    cin >> n >> m;
    ll a[n];
    ll b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = (a[i]) % m;
    }
    cin >> s;
    j = 0;
    k = n - 1;
    for (i = 0; i < n; i++)
    {
        p = b[j];
        for (int t = j + 1; t <= k; t++)
        {
            p = (p * b[t]) % m;
        }
        cout << p << ' ';
        if (s[i] == 'L')
            j++;
        else
        {

            k--;
        }
    }
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
