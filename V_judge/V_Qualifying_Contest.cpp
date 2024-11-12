// Author:  Rajesh Biswas
// Date  :  03.06.2024

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
    int n,m;
    cin>>n>>m;
    vector<string>v;
    map<int,vector<pair<int,int>>>mp;
    for(int i=0;i<n;i++)
    {
        string name;
        int point,reg;
        cin>>name>>reg>>point;
        v.pb(name);
        mp[reg].ppb(point,i);
    }
    for(int i=1;i<=m;i++)
    {
        sort(mp[i].begin(),mp[i].end());
        if(mp[i].size()==2)
            cout<<v[mp[i][1].sc]<<' '<<v[mp[i][0].sc]<<'\n';
        else
        {
            int sz=mp[i].size();
            if(mp[i][sz-1].fi==mp[i][sz-2].fi&&mp[i][sz-2].fi==mp[i][sz-3].fi)
            cout<<"?\n";
            else 
            cout<<v[mp[i][sz-1].sc]<<' '<<v[mp[i][sz-2].sc]<<'\n';
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
