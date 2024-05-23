// Author:  Rajesh Biswas
// Date  :  16.03.2024

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
string s;
bool check(ll n)
{
    ll i = 0, cnt = 0;
    while (i + n < s.size())
    {
        if (s[i] == s[i + n] || s[i] == '?' || s[i + n] == '?')
        {
            cnt++;
            if (cnt == n)
                return true;
        }
        else
            cnt = 0;
        i++;
    }
    return false;
}
void solve()
{
    ll n;
    cin >> s;
    n = s.size()+2;
    n /= 2;
    while (n--)
    {
        if (check(n))
        {
            cout << (n * 2);
            nl;
            rrr;
        }
    }
    cout << 0;
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
