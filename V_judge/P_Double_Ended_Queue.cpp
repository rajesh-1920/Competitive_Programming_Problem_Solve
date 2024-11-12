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
void solve(void)
{
    int n, m, x;
    cin >> n >> m;
    deque<int> d;
    while (m--)
    {
        string s;
        cin >> s;
        if (s == "pushLeft")
        {
            cin >> x;
            if (d.size() == n)
                cout << "The queue is full\n";
            else
            {
                d.push_front(x);
                cout << "Pushed in left: " << x << '\n';
            }
        }
        else if (s == "pushRight")
        {
            cin >> x;
            if (d.size() == n)
                cout << "The queue is full\n";
            else
            {
                d.push_back(x);
                cout << "Pushed in right: " << x << '\n';
            }
        }
        else
        {
            if (d.size() == 0)
                cout << "The queue is empty\n";
            else if (s == "popLeft")
            {
                cout << "Popped from left: " << d.front() << '\n';
                d.pop_front();
            }
            else
            {
                cout << "Popped from right: " << d.back() << '\n';
                d.pop_back();
            }
        }
    }
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        cout << "Case " << T << ":\n";
        solve();
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
