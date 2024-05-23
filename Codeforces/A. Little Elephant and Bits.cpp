//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s,t;
    cin>>s;
    t=s;
    sort(t.begin(),t.end());
    if(t[0]=='1')
    {
        for(ll i=1; i<s.size(); i++)
            cout<<s[i];
        cout<<endl;
        return;
    }
    ll f=1;
    for(ll i=0; i<s.size(); i++)
    {
        if(f==1&&s[i]=='0')
        {
            f=0;
            continue;
        }
        cout<<s[i];
    }
    cout<<endl;
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
