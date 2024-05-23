//Rajesh Biswas
//Date: 07.08.2023

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
    int n,i,j,flag=0;
    string s;
    cin>>n>>s;
    for(i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
            continue;
        for(j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                flag=1;
                goto last;
            }
        }
    }
    last:
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
