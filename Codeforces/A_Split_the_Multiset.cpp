// Author:  Rajesh Biswas
// Date  :  15.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 100009
//------------------------------------------------------------------------------------
void solve(void)
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    priority_queue<int> pq;
    pq.push(n);
    while (!pq.empty())
    {
        int u = pq.top();
        pq.pop();
        if (u <= 1)
            break;
        if (u <= k)
        {
            cnt++;
            continue;
        }
        ll mo = u % k;
        for (int i = 0; i < k - 1; ++i)
        {
            if (i < mo)
            {
                pq.push(1);
                u--;
                if (u <= 0)
                    break;
            }
            else
            {
                if (u <= k)
                {
                    pq.push(u);
                    u = 0;
                    break;
                }
                pq.push(k);
                u -= k;
            }
        }
        // if (u > 1)
        pq.push(u);
        // cout << pq.top() << ' ';
        cnt++;
    }
    // nl;
    cout << cnt << endl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/