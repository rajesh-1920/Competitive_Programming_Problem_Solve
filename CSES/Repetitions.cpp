//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    string s;
    cin>>s;
    int i,mx=0,cnt=1;
    char ch='1';
    for(i=0; i<s.size(); i++)
    {
        if(s[i]==ch)cnt++;
        else
        {
            cnt=1;
            ch=s[i];
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<'\n';
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
