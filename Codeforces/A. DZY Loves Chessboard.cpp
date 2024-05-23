//Author:  Rajesh Biswas
//Date  :  25.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll m,n,j,i;
    cin>>n>>m;
    string s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='.')
            {
                if(i%2==0)
                {
                    if(j%2==0)
                        s[i][j]='B';
                    else
                        s[i][j]='W';
                }
                else
                {
                    if(j%2==0)
                        s[i][j]='W';
                    else
                        s[i][j]='B';
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<s[i]<<"\n";
    }
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
