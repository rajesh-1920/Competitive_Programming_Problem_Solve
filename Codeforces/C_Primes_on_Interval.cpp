// Author:  Rajesh Biswas
// Date  :  08.05.2024

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
int n = 2000009, a, b, k;
vector<int> is_prime(n, -1), t(n, 0);
//------------------------------------------------------------------------------------
bool check(int l)
{
    for (int x = a; x <= b - l + 1; x++)
    {
        int i = x + l - 1;
        if (t[i] - t[x - 1] < k)
            return false;
    }
    return true;
}
void solve()
{
    cin >> a >> b >> k;
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (is_prime[i])
            is_prime[i] = 1;
        for (int j = i + i; j < n; j += i)
            is_prime[j] = 0;
    }
    for (int i = 1; i < n; i++)
        t[i] = t[i - 1] + is_prime[i];
    int i = 1, j = b - a + 1;
    while (j - i > 1)
    {
        int m = (i + j) / 2;
        if (check(m))
            j = m;
        else
            i = m;
    }
    if (check(i))
        cout << i;
    else if (check(j))
        cout << j;
    else
        cout << -1;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
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
