// Author:  Rajesh Biswas
// Date  :  05.11.2023

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
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, cnt, sum = 0, temp;
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        cout << 0;
        return;
    }
    else
        cnt = 1;
    for (i = 0; i < s.length(); i++)
        sum += (s[i] - '0');
    while (true)
    {
        temp = 0;
        if (sum < 10)
        {
            cout << cnt;
            return;
        }
        while (sum > 0)
        {
            temp += (sum % 10);
            sum /= 10;
        }
        sum = temp;
        cnt++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}
