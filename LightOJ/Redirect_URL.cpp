// Author:  Rajesh Biswas
// Date  :  05.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 1000000
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "no\n"
#define yes cout << "yes\n"
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
    string s, r = "https";
    cin >> s;
    reverse(s.begin(), s.end());
    int i = s.size() - 1;
    for (; s[i] != ':'; i--)
        s.pop_back();
    reverse(s.begin(), s.end());
    r += s;
    cout << r;
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
        cout << "Case " << T << ": ";
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
