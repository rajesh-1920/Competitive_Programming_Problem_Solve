//Author:  Rajesh Biswas
//Date  :  28.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s;
    map<char,ll> mp;
    cin>>s;
    for(auto i:s)
        mp[i]++;
    ll cnt=0;
    for(auto it:mp)
    {
        if(it.second%2!=0)
            cnt++;
    }
    if(cnt%2!=0||cnt==0)
        cout<<"First\n";
    else
        cout<<"Second\n";
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
