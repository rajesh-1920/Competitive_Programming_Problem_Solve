// Author:  Rajesh Biswas
// Date  :  02.06.2024

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
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            rrr;
        vector<int> ans;
        deque<int> dq;
        for (int i = 1; i <= n; i++)
            dq.push_back(i);

        while (dq.size() > 1)
        {
            ans.push_back(dq.front());
            dq.pop_front();
            ll tt = dq.front();
            dq.push_back(tt);
            dq.pop_front();
        }
        cout << "Discarded cards:";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ' ' << ans[i];
            if (i + 1 < ans.size())
                cout << ',';
        }
        nl;
        cout << "Remaining card: " << dq.front();
        nl;
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
