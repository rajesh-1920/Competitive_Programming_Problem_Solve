// Author:  Rajesh Biswas
// Date  :  07.06.2024

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
int x1, x2, x3, x4, fl = 0;
int a[] = {-1, -1, 1, 1, 2, 2, -2, -2};
int b[] = {2, -2, 2, -2, 1, -1, 1, -1};
map<pair<int, int>, int> mp;
void dd(int cnt, int t1, int t2)
{
    mp[{t1, t2}]++;
    cout << t1 << ' ' << t2 << '\n';
    // if (t1 > 2 + x3 || t1 < x3 - 2)
    //     rrr;
    // if (t2 > 2 + x4 || t2 < x4 - 2)
    //     rrr;
    if ((x1 == x3 && x2 == x4) || fl == 1)
    {
        if (cnt & 1)
            fl = 1;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        int x = t1 + a[i];
        int y = t2 + b[i];
        if (mp[{x, y}] == 0)
            if (((2 * x >= x3 && x <= 2 * x1) || (x <= 2 * x3 && x >= 2 * x1)) && ((y >= 2 * x2 && y <= 2 * x4) || (y >= 2 * x4 && y <= 2 * x2)))
                dd(cnt + 1, x, y);
    }
}
void solve()
{
    // mp.clear();
    fl = 0;
    cin >> x1 >> x2 >> x3 >> x4;
    // dd(0, x1, x2);
    int t1 = abs(x1 - x3) + abs(x2 - x4);
    if (t1 & 1)
        cout << "Monke\n";
    else
        cout << "Potato\n";
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
