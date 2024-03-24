// Author:  Rajesh Biswas
// Date  :  24.03.2024

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

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll i, c0 = 0, c1 = 0, res = 0, t1 = 0;
    double n, mn = 1e15;
    string s;
    cin >> n >> s;
    for (i = 0; i < s.size(); i++)
    {
        c1 += s[i] == '1';
        t1 += s[i] == '1';
    }
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            c0++;
        else
            c1--;
        if (c0 >= (i + 2) / 2 && c1 >= (s.size() - i) / 2)
        {
            if (mn > (abs(n / 2. - (double)i - 1.0)))
            {
                res = i + 1;
                mn = (abs(n / 2. - (double)i - 1.0));
            }
        }
    }
    if (t1 >= (s.size() + 1) / 2)
    {
        if (mn > (abs(n / 2. - 1.0)))
            res = 0;
    }
    cout << res;
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
