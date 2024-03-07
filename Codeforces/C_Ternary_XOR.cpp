// Author:  Rajesh Biswas
// Date  :  07.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
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
    ll n, i, fl = 0;
    string s1, s2, t;
    cin >> n >> t;
    for (i = 0; i < n; i++)
    {
        if (fl)
        {
            s1.pb('0');
            s2.pb(t[i]);
        }
        else
        {
            if (t[i] == '2')
            {
                s1.pb('1');
                s2.pb('1');
            }
            else if (t[i] == '0')
            {
                s1.pb('0');
                s2.pb('0');
            }
            else
            {
                fl = 1;
                s1.pb('1');
                s2.pb('0');
            }
        }
    }
    cout << s1;
    nl;
    cout << s2;
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
/*
    for(auto &x:v)cin>>x;
*/
