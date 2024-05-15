// Author:  Rajesh Biswas
// Date  :  14.05.2024

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
    int n, x, i, j;
    cin >> n;
    vector<int> a, b;
    int r[205];
    for (int i = 0; i < n; i++)
        cin >> x, a.push_back(x);
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> x, b.push_back(x);
    int ans = 0, sa = 0, sb = 0, mxa = 0, mxb = 0, fl = 1;
    i = j = 0;
    while (true)
    {
        if (i == a.size() && j == b.size())
            break;
        if (fl)
        {
            if (i < a.size())
            {
                sa += a[i++];
                mxa = max(sa, mxa);
            }
            if(j<b.size())fl=0;
        }
        else
        {
            if (j < b.size())
            {
                sb += b[j++];
                mxb = max(sb, mxb);
            }
            if(i<a.size())fl=1;
        }
        ans=max(ans,(mxa+mxb));
    }
    cout << ans;
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
