// Author:  Rajesh Biswas
// Date  :  19.11.2023

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

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll i, j, n, k, cnt = 0, ca;
    string s;
    cin >> n >> k >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            cnt++;
    }
    if (cnt == k)
        cout << 0 << '\n';
    else if (cnt > k)
    {
        cnt = 0;
        cout << 1 << '\n';
        for (i = n - 1; i >= 0; i--)
        {
            if (cnt == k)
            {
                for (j = i; j >= 0; j--)
                {
                    if (s[j] == 'B')
                    {
                        cout << j + 1 << " A\n";
                        break;
                    }
                }
                break;
            }
            if (s[i] == 'B')
                cnt++;
        }
    }
    else
    {
        ca = 0;
        cout << 1 << '\n';
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                ca++;
            if (cnt + ca == k)
            {
                cout << i + 1 << " B\n";
                break;
            }
        }
    }
}
//------------------------------------------------------------------------------------
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
