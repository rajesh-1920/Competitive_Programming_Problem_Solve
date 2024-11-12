// Author:  Rajesh Biswas
// Date  :  23.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
    int n, mn = INT_MAX;
    string s;
    cin >> n >> s;
    if (n == 2)
    {
        if (s[0] == '0')
            cout << s[1] << '\n';
        else
            cout << s << '\n';
        rrr;
    }
    if (n == 3)
    {
        int t1 = s[0] - '0';
        int t2 = s[1] - '0';
        int t3 = s[2] - '0';
        int x1 = (t1 * 10 + t2) + t3;
        int x2 = (t1 * 10 + t2) * t3;
        int x3 = t1 + (t2 * 10 + t3);
        int x4 = t1 * (t2 * 10 + t3);
        cout << min({x1, x2, x3, x4});
        nl;
        rrr;
    }
    for (int i = 0; i + 1 < n; i++)
    {
        int t1 = s[i] - '0', t2 = s[i + 1] - '0';
        int sum = t1 * 10 + t2;
        //cout<<sum<<' ';
        for (int j = i - 1; j >= 0; j--)
        {
            if (s[j] == '0')
            {
                cout << '0' << '\n';
                rrr;
            }
            else if (s[j] != '1')
                sum += (s[j] - '0');
        }
        for (int j = i + 2; j < n; j++)
        {
            if (s[j] == '0')
            {
                cout << '0' << '\n';
                rrr;
            }
            else if (s[j] != '1')
                sum += (s[j] - '0');
        }
        //cout<<sum<<'\n';
        mn = min(mn, sum);
    }
    cout << mn;
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
