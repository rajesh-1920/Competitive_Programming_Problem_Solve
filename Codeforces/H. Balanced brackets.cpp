// Author:  Rajesh Biswas
// Date  :  30.09.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    map<char, ll> m = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
    string s;
    cin >> s;
    stack<char> st;
    for (auto pr : s)
    {
        if (m[pr] < 0)
            st.push(pr);
        else
        {
            if (st.empty())
            {
                cout << "NO\n";
                return;
            }
            if (m[pr] + m[st.top()] == 0)
                st.pop();
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    if (st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
