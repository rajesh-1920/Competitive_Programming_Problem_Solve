//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll i,j;
    string s[5];
    for(i=0; i<4; i++)
        cin>>s[i];
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(s[i][j]==s[i][j+1])
            {
                if(s[i][j]==s[i+1][j]||s[i][j+1]==s[i+1][j+1])
                {
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    for(i=3; i>=0; i--)
    {
        for(j=3; j>=0; j--)
        {
            if(s[i][j]==s[i][j-1])
            {
                if(s[i][j]==s[i-1][j]||s[i][j-1]==s[i-1][j-1])
                {
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
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
