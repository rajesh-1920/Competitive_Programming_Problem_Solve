#include<iostream>
#include<string>
#include<string.h>
using namespace std;

void display(int r)
{
    if(r==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

void solve()
{
    char s[100],c;
    int len,i,j,res;
    cin>>s>>c;
    len=strlen(s);
    int ar[len];
    j=0;
    for(i=0; i<len; i++)
    {
        if(s[i]==c)
        {
            ar[j]=i;
            j++;
        }
    }
    res=0;
    for(i=0; i<j; i++)
    {
        if(ar[i]%2==0&&(len-1-ar[i])%2==0)
        {
            res=1;
            break;
        }
    }
    display(res);
}

int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
