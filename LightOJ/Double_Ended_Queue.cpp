// Author:  Rajesh Biswas
// Date  :  05.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 1000000
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define no cout << "no\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, m, cnt = 0, t;
    cin >> n >> m;
    string s;
    list<ll> l;
    while (m--)
    {
        cin >> s;
        if (s == "pushLeft")
        {
            cin >> t;
            cnt++;
            if (cnt > n)
            {
                cout << "The queue is full\n";
                cnt = n;
            }
            else
            {
                cout << "Pushed in left: " << t << "\n";
                l.push_front(t);
            }
        }
        else if (s == "pushRight")
        {
            cin >> t;
            cnt++;
            if (cnt > n)
            {
                cout << "The queue is full\n";
                cnt = n;
            }
            else
            {
                cout << "Pushed in right: " << t << "\n";
                l.push_back(t);
            }
        }
        else if (s == "popRight")
        {
            cnt--;
            if (cnt < 0)
            {
                cout << "The queue is empty\n";
                cnt = 0;
            }
            else
            {
                t = l.back();
                cout << "Popped from right: " << t << "\n";
                l.pop_back();
            }
        }
        else if (s == "popLeft")
        {
            cnt--;
            if (cnt < 0)
            {
                cout << "The queue is empty\n";
                cnt = 0;
            }
            else
            {
                t = l.front();
                cout << "Popped from left: " << t << "\n";
                l.pop_front();
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
