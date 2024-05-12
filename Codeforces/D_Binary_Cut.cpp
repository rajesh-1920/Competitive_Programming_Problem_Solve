// Author:  Rajesh Biswas
// Date  :  10.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
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
void solve()
{
    string s;
    cin>>s;
    s.push_back(s.back());
    s.push_back(s.back());
    ll t=s.size();
    int cnt=1,fl=1;
    for(int i=0;i+1<t;i++)
    {
        if(s[i]!=s[i+1])
       {
            if(fl&&s[i+1]=='1')
            {
                cnt--;
                fl=0;
            }//else
            cnt++;
       }
    }
    cout<<cnt;
    nl;
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
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
