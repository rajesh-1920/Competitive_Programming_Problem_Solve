// Author:  Rajesh Biswas
// Date  :  03.07.2024

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
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

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
    string s1, s2, s0;
    int mx = 0;
    cin >> s0 >> s1 >> s2;
    int a[] = {0, 0, 0};
    int b[] = {0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        s0[i] == '1' ? a[0]++ : b[0]++;
        s1[i] == '1' ? a[1]++ : b[1]++;
        s2[i] == '1' ? a[2]++ : b[2]++;
    }
    for (int i = 0; i < 10; i++)
    {
        sort(a, a + 3);
        sort(b, b + 3);
    }

    for (int i = 0; i < 10; i++)
    {
        if (mx)
            cout << 1, mx--;
        else
            cout << 0;
    }
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
