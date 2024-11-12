// Author:  Rajesh Biswas
// Date  :  10.07.2024

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
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while (cin >> s)
    {
        int fl = 1;
        deque<char> dq;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                fl = 0;
                while (!st.empty())
                {
                    dq.push_front(st.top());
                    st.pop();
                }
            }
            else if (s[i] == ']')
                fl = 1;
            else
            {
                if (fl)
                    dq.push_back(s[i]);
                else
                    st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            dq.push_front(st.top());
            st.pop();
        }
        while (!dq.empty())
        {
            cout << dq.front();
            dq.pop_front();
        }
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
