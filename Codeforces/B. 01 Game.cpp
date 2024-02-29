#include<iostream>
#include<string>
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
    string s;
    int i,count0=0,count1=0,min;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='1')
        {
            count1++;
        }
        if(s[i]=='0')
        {
            count0++;
        }
    }
    min=(count0>count1)?count1:count0;
    if(min%2==0)
    {
        cout<<"NET"<<endl;
    }
    else
    {
        cout<<"DA"<<endl;
    }
}

