#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void solve();

int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}

void solve()
{
    int i,l,count=0,flag=0;
    char s[101];
    cin>>s;
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='1')
            flag=1;
        if(flag==1&&s[i]=='0')
            count++;
    }
    for(i=l-1; i>=0; i--)
    {
        if(s[i]=='1')
            break;
        if(s[i]=='0')
            count--;
    }
    if(l==(count*(-1)))
        count=0;
    cout<<count<<endl;
}
