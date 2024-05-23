// Author:  Rajesh Biswas
// Date  :  05.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define fi first
#define sc second
#define pb(x) push_back(x)

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll i, sum = 0, fl = 0;
    string s;
    map<char, ll> mp;
    cin >> s;
    
    for (i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'E')
            sum += 10000;
        else if (s[i] == 'D')
        {
            if (mp['E'] == 0)
                sum += 1000;
            else
                sum -= 1000;
        }
        else if (s[i] == 'C')
        {
            if (mp['E'] == 0 && mp['D'] == 0)
                sum += 100;
            else
                sum -= 100;
        }
        else if (s[i] == 'B')
        {
            if (mp['E'] == 0 && mp['D'] == 0 && mp['C'] == 0)
                sum += 10;
            else
                sum -= 10;
        }
        else if (s[i] == 'A')
        {
            if (mp['E'] == 0 && mp['D'] == 0 && mp['C'] == 0 && mp['B'] == 0)
                sum += 1;
            else
                sum -= 1;
        }
        mp[s[i]]++;
    }
    cout << sum;
    nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
