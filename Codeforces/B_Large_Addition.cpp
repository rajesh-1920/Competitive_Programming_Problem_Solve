// Author:  Rajesh Biswas
// Date  :  09.06.2024

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
bool cch(ll x)
{
    while (x > 0)
    {
        if (x % 10 < 5)
            return true;
    }
    return false;
}
bool ch(ll x, ll y)
{
    ll c1 = 0, c2 = 0;
    while (x > 0)
    {
        if (x % 10 < 5)
            return false;
        c1++;
        x /= 10;
    }
    while (y > 0)
    {
        if (y % 10 < 5)
            return false;
        c2++;
        y /= 10;
    }
    return c1 == c2;
}

void solve()
{
    ll n;
    cin >> n;
    stack<int> st1, st2, c;
    int t = 0;
    ll nn = n;
    while (nn > 0)
    {
        int x = n % 10;

        for (int i = 5; i <= 9; i++)
        {
            for (int j = 5; j <= 9; j++)
            {
                if ((i + j + t) % 10 == x)
                {
                    st1.push(i);
                    st2.push(j);
                    c.push(t);
                    
                }
            }
        }
        nn /= 10;
    }
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
