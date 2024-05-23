// Author:  Rajesh Biswas
// Date  :  25.02.2024

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
    ll b[4], a, t, i, j;
    char ch;
    for (i = 0; i < 4; i++)
    {
        cin >> b[i];
        if (i < 3)
            cin >> ch;
    }
    string st, s, tt;
    cin >> st;
    for (i = 0; i < 4; i++)
    {
        a = b[i];
        while (a > 0)
        {
            t = a % 2;
            ch = (char)(t + '0');
            tt.pb(ch);
            a /= 2;
        }
        j = 8 - tt.size();
        while (j--)
            tt.pb('0');
        reverse(tt.begin(), tt.end());
        tt.pb('.');
        s += tt;
        tt.clear();
    }
    s.pop_back();
    if (s == st)
        Yes;
    else
        No;
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
