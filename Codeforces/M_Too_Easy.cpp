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
ll c1, c2, t1, t2, k, mn;
int a[] = {-1, 1, 0, 0};
int b[] = {0, 0, 1, -1};
bool isval(int x, int y)
{
    return (x >= c1 && x <= t1 && y >= c2 && y <= t2);

}
void bfs(int x, int y, ll s)
{
    if (x == t1 && y == t2)
    {
        mn = min(mn, s);
        rrr;
    }
    if (isval(x, y))
        ;
}
void solve()
{
    cin >> c1 >> c2 >> t1 >> t2 >> k;
    mn = 1000000000000000;
    if (c1 > t1)
    {
        swap(c1, t1);
        swap(c2, t2);
    }
    if (t2 < t1)
        t2 = -t2;
    bfs(c1, c2, 0);
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
