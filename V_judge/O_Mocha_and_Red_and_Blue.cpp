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
void solve(void)
{
    int n,t=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    if(s[i]!='?')
    {t=i;break;}
    char ch=s[t];
    if(t==0&&s[t]=='?')
    ch='R';
    for(int i=t+1;i<s.size();i++)
    {
        if(s[i]=='?')
        {
            if(ch=='R')s[i]='B';
            else s[i]='R';
        }
        ch=s[i];
    }
    if(t==0&&s[t]=='?')
    {ch='R';s[0]='R';}
    ch=s[t];
    for(int i=t-1;i>=0;i--)
    {
        if(s[i]=='?')
        {
            if(ch=='R')s[i]='B';
            else s[i]='R';
        }
        ch=s[i];
    }
    cout<<s;
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
/*
    for(auto &x:v)cin>>x;
*/
