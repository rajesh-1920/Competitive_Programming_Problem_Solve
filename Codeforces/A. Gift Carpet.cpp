//Author : Rajesh Biswas
//Date : 24.08.2023
//Problem : A. Gift Carpet
//Ratings :
//Contest : Div.3

#include<iostream>
using namespace std;
void solve(void);
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    int n,m,i,j,cnt=0;
    cin>>n>>m;
    char s[n][m+1];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cin>>s[i][j];
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if(s[i][j]=='v'&&cnt==0)
            {
                cnt=1;
                break;
            }
            if(s[i][j]=='i'&&cnt==1)
            {
                cnt=2;
                break;
            }
            if(s[i][j]=='k'&&cnt==2)
            {
                cnt=3;
                break;
            }
            if(s[i][j]=='a'&&cnt==3)
            {
                cnt=4;
                break;
            }
        }
        if(cnt==4)
            break;
    }
    if(cnt==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
