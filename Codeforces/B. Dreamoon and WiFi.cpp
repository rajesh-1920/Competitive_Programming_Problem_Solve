// Author:  Rajesh Biswas
// Date  :  09.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return;
//------------------------------------------------------------------------------------
void solve(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    long double acp = 0, cp = 0, cnt = 0, res = 0, temp, t;
    ll i;
    for (i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
            acp++;
        else
            acp--;
    }
    for (ll i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '?')
            cnt++;
        else if (s2[i] == '+')
            cp++;
        else
            cp--;
    }
    if (cnt == 0)
    {
        if (acp == cp)
            res = 1;
    }
    else if (cnt >= (abs(acp - cp)))
    {
        
    }
    // cout << res;
    //  cout << acp << ' ' << cp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << showpoint << fixed << setprecision(12);
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
