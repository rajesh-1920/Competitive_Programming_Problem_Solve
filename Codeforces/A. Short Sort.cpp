//Author:  Rajesh Biswas
//Date  :  21.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s,t= {"abc"};
    cin>>s;
    if(s[0]==t[0]||s[1]==t[1]||s[2]==t[2])
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}
