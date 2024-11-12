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
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << showpoint << setprecision(4);
    int test = 1, T;
    // cin.ignore();
    cin >> test;
    cin.ignore();
    string s;
    getline(cin, s);
    for (T = 1; T <= test; T++)
    {
        map<string, double> t;
        double cnt = 0;
        while (getline(cin, s))
        {
            if (s == "")
                break;
            t[s]++;
            cnt++;
        }
        for (auto ii : t)
            cout << ii.fi << ' ' << ii.sc * 100.0 / cnt << '\n';
        if (T < test)
            nl;
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
