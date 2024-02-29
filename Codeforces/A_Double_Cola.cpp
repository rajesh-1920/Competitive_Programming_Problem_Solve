// Author:  Rajesh Biswas
// Date  :  26.02.2024

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
    ll n, t, i, j, temp, rin = 10, div = 1;
    cin >> n;
    t = n;
    i = 0;
    j = 5;
    while (true)
    {
        if (t > i && t <= j)
        {
            for (j = 1; j <= 5; j++)
            {
                if (t <= i + div)
                {
                    n = j;
                    break;
                }
                i += div;
            }
            break;
        }
        i = j;
        j += rin;
        rin *= 2;
        div *= 2;
    }
    // cout << n;
    switch (n)
    {
    case 1:
    {
        cout << "Sheldon";
        break;
    }
    case 2:
    {
        cout << "Leonard";
        break;
    }
    case 3:
    {
        cout << "Penny";
        break;
    }
    case 4:
    {
        cout << "Rajesh";
        break;
    }
    case 5:
    {
        cout << "Howard";
        break;
    }
    }
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
/*
    for(auto &x:v)cin>>x;
*/
