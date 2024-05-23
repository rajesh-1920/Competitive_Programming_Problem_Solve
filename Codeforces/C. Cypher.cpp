#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
void solve();

int main(void)
{
    long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    int n,i,j;
    cin>>n;
    int a[n],b;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b>>s;
        for(j=0;j<b;j++)
        {
            if(s[j]=='U'||s[j]=='u')
            {
                if(a[i]==0)
                {
                    a[i]=9;
                }
                else
                {
                    a[i]=a[i]-1;
                }
            }
            else if(s[j]=='D'||s[j]=='d')
            {
                if(a[i]==9)
                {
                    a[i]=0;
                }
                else
                {
                    a[i]=a[i]+1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

