//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cntv(string &s,ll n)
{
    ll cn=0;
    if(n<0)return cn;
    if(s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u')cn++;
    if(s[n]=='A'||s[n]=='E'||s[n]=='I'||s[n]=='O'||s[n]=='U')cn++;
    return cn+cntv(s,n-1);
}
void solve(void)
{
    string s;
    getline(cin,s);
    ll res,l;
    l=s.size();
    res=cntv(s,l-1);
    cout<<res<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
        solve();
    return 0;
}
