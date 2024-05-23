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
    {
        solve();
    }
}

void solve()
{
    int i,l,count=0;
    char s[51];
    cin>>s;
    l=strlen(s);
    sort(s,s+l);
    for(i=0; i<l-2; i++)
    {
        if(s[i]==s[i+1]&&s[i+1]==s[i+2])
        {
            count++;
        }
    }
    l=l-count;
    cout<<l/2<<endl;
}
