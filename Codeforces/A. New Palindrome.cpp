//Author:  Rajesh Biswas
//Date  :  03.10.2023

#include<bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s;
    cin>>s;
    map<char,ll>mp;
    map<char,ll>::iterator it1,it2;
    for(ll i=0; i<s.size(); i++)
        mp[s[i]]++;
    it1=it2=mp.begin();
    it2++;
    if((s.size()%2==0&&mp.size()>1)||(s.size()%2!=0&&(mp.size()>2||(mp.size()>1&&(*it1).sc>1&&(*it2).sc>1))))
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
