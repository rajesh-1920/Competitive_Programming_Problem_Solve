// Author:  Rajesh Biswas
// Date  :  24.02.2024

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
    string s;
    ll n, i, num = 0, b, t, rim = 0;
    cin >> s >> b;
    if (b < 0)
        b *= -1;
    if (s[0] == '-')
        s.erase(s.begin());
    for (i = 0; i < s.size(); i++)
    {
        t = s[i] - '0';
        n = rim * 10 + t;
        rim = n % b;
    }
    if (rim)
        cout << "not divisible";
    else
        cout << "divisible";
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
