// Author:  Rajesh Biswas
// Date  :  12.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000007
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
    string a, b;
    cin >> a >> b;
    int mx = 0;
    for (int l = 0; l < a.size(); l++)
        for (int t = 0; t < b.size(); t++)
        {
            int i = l, j = t, cnt = 0;
            while (i < a.size() && j < b.size())
            {
                if (a[i] == b[j])
                {
                    cnt++;
                    i++;
                    j++;
                }
                else
                    break;
                mx = max(mx, cnt);
            }
        }
    cout << (a.size() - mx + b.size() - mx);
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
