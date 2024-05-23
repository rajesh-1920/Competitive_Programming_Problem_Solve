//Author:  Rajesh Biswas
//Date  :  29.09.2023

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(void)
{
    ll n,i,cnt=0;
    string ss;
    cin>>n>>ss;
    list<char> s(ss.begin(),ss.end()),rs;
    list<char>::iterator it1,it2;
    rs=s;
    reverse(rs.begin(),rs.end());
    for(i=0; i<n; i++)
    {
        if(s==rs)
            cnt++;
        it1=s.begin();
        s.push_back(*it1);
        s.pop_front();
        it2=--rs.end();
        rs.push_front(*it2);
        rs.pop_back();
    }
    cout<<cnt<<"\n";
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
