// Author:  Rajesh Biswas
// Date  :  11.03.2024

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
    ll n, i, cnt = 0;
    string s;
    cin >> n >> s;
    i = 0;
    while (true)
    {
        if (i >= n)
        {
            cout << cnt;
            nl;
            rrr;
        }
        if (s[i] == 'p' && i > 1 && i < n - 2)
        {
            if (s[i - 1] == 'a' && s[i - 2] == 'm' && s[i + 1] == 'i' && s[i + 2] == 'e')
                cnt++;
        }
        if (s[i] == 'i' && i > 0 && i < n - 1)
        {
            if (s[i - 1] == 'p' && s[i + 1] == 'e')
                cnt++;
        }
        if (s[i] == 'a' && i > 0 && i < n - 1)
        {
            if (s[i + 1] == 'p' && i < n - 3)
            {
                if (s[i - 1] == 'm' && s[i + 2] == 'i' && s[i + 3] == 'e')
                {
                    cnt++;
                    i += 2;
                }
                else if (s[i - 1] == 'm' && s[i + 1] == 'p')
                    cnt++;
            }
            else if (s[i - 1] == 'm' && s[i + 1] == 'p')
                cnt++;
        }
        i++;
    }
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
