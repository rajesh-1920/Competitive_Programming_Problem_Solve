// Author:  Rajesh Biswas
// Date  :  10.05.2024

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
int n,k,ans;
void res(int c2,int s,int cn)
{
    if(cn>n||s>k)
    rrr;
    if(n==cn&&s==k)
    {ans=min(ans,c2);rrr;}
    res(c2+1,s+2,cn+1);
    res(c2,s+3,cn+1);
    res(c2,s+4,cn+1);
    res(c2,s+5,cn+1);
}
void solve(void)
{
    cin>>n>>k;
    ans=INT_MAX;
    res(0,0,0);
    cout<<ans;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
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
/*
    for(auto &x:v)cin>>x;
*/
