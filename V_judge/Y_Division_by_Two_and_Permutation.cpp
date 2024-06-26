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
    int n;
    cin >> n;
    vector<int> a;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n && mp[x] == 0)
            mp[x]++;
        else
            a.push_back(x);
    }
    while (a.size())
    {
        int x = a.back();
        a.pop_back();
        while (x)
        {
            if (x <= n && mp[x] == 0)
                {mp[x]++;break;}
            else
                x /= 2;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(mp[i]!=1)
        {
            NO;rrr;
        }
    }
    YES;
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
