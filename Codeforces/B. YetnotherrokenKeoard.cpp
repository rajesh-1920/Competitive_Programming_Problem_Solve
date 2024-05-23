// Date  :  05.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})
//------------------------------------------------------------------------------------
void solve(void)
{
    string s;
    cin >> s;
    ll i;
    vector<pair<ll, char>> a, b;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != 'b' && s[i] != 'B')
        {
            if (isupper(s[i]))
                a.ppb(i, s[i]);
            else
                b.ppb(i, s[i]);
        }
        else
        {
            if (s[i] == 'b' && b.size() > 0)
                b.pop_back();
            if (s[i] == 'B' && a.size() > 0)
                a.pop_back();
        }
    }
    a.insert(a.end(), b.begin(), b.end());
    srt(a);
    for (auto it : a)
        cout << it.sc;
    cout << '\n';
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}