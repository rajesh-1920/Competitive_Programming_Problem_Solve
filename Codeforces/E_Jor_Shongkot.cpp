#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#else
#define dbg(...)
#endif
using namespace std;
typedef long long ll;

void Approach()
{
    int n, xxx = 1;
    cin >> n;
    map<int, int> che;
    vector<int> v(n);
    for (int ii = 0; ii < n; ++ii)
    {
        cin >> v[ii];
        che[v[ii]]++;
        if (che[v[ii]] > 1 || v[ii] > n || v[ii] == 0)
            xxx = 0;
    }

    if (xxx)
    {
        cout << "YES" << '\n';
        return;
    }

    set<int> possible_x;
    for (int ii = 0; ii < n; ++ii)
    {
        int a = ii + 1;
        int b = v[ii];
        int c = a ^ b;
        possible_x.insert(c);
    }

    for (auto x : possible_x)
    {
        if (x > 0)
        {
            bool f = true;
            map<int, int> mp;
            for (auto ii : v)
            {
                int c = ii ^ x;
                if (c >= 1 and c <= n and mp[c] == 0)
                    mp[c]++;
                else
                {
                    f = false;
                    break;
                }
            }
            if (f)
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    // cin >> T;
    for (int C = 1; C <= T; C++)
    {
        Approach();
    }
    return 0;
}