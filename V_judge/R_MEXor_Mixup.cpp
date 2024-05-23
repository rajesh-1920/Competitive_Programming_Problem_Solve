// Author:  Rajesh Biswas
// Date  :  19.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
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
#define N 300009
//------------------------------------------------------------------------------------
map<int, int> mp;
string bin(int a)
{
    string s = "";
    while (a > 0)
    {
        if (a & 1)
            s.pb('1');
        else
            s.pb('0');
        a >>= 1;
    }
    return s;
}
void solve(void)
{
    int a, b;
    cin >> a >> b;
    string sa = bin(mp[a - 1]);
    string sb = bin(b);
    while (sa.size() > sb.size())
        sb.pb('0');
    while (sa.size() < sb.size())
        sa.pb('0');
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());
    int t = 0;
    for (int i = 0; i < sa.size(); i++)
    {
        if (sb[i] != sa[i])
            t |= 1 << i;
    }
    if (t == 0)
        cout << a;
    else if (t == a)
        cout << a + 2;
    else
        cout << a + 1;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    int res = 0;
    for (int i = 0; i <= N; i++)
    {
        res ^= i;
        mp[i] = res;
    }
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
