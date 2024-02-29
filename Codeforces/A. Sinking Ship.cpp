// Author:  Rajesh Biswas
// Date  :  16.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(x) push_back(x)

void solve(void)
{
    ll n;
    cin >> n;
    string s1, s2;
    vector<string> v[4];
    while (n--)
    {
        cin >> s1 >> s2;
        if (s2 == "rat")
            v[0].pb(s1);
        else if (s2 == "child" || s2 == "woman")
            v[1].pb(s1);
        else if (s2 == "man")
            v[2].pb(s1);
        else if (s2 == "captain")
            v[3].pb(s1);
    }
    for (n = 0; n < 4; n++)
    {
        for (auto it : v[n])
            cout << it << '\n';
    }
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
