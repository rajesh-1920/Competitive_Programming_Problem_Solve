// Author:  Rajesh Biswas
// Date  :  04.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 1000000
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "no\n"
#define yes cout << "yes\n"
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
    ll i = 1, n = 1, r = 1;
    vector<string> s;
    string t, tt, lst = "";
    s.pb("http://www.lightoj.com/");
    while (true)
    {
        cin >> t;
        if (t == "QUIT")
        {
            nl;
            rrr;
        }
        if (t == "VISIT")
        {
            cin >> tt;
            lst = tt;
            s.pb(tt);
            i = s.size() - 1;
            cout << s[i];
            r = i;
            nl;
        }
        if (t == "BACK")
        {
            i--;
            if (i < 0)
            {
                cout << "Ignored";
                i = r;
            }
            else
            {
                cout << s[i];
                r = i;
                s.pb(s[i]);
            }
            nl;
        }
        if (t == "FORWARD")
        {
            i++;
            if (i >= s.size())
            {
                cout << "Ignored";
                i = r;
            }
            else
            {
                if (s[i - 1] == lst && i > 0)
                {
                    cout << "Ignored";
                    i = r;
                    lst.clear();
                }
                else
                {
                    cout << s[i];
                    r = i;
                    s.pb(s[i]);
                }
            }
            nl;
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
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        cout << "Case " << T << ": ";
        nl;
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
