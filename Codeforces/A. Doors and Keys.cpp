#include<iostream>
using namespace std;
#define ll long long int

void solve(void);

int main(void)
{
    ll test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    string s;
    ll i,tr,tg,tb,flag;
    cin>>s;
    tr=tg=tb=flag=0;
    for(i=0; i<6; i++)
    {
        if(s[i]=='R'&&tr==0)
        {
            flag=1;
            break;
        }
        if(s[i]=='G'&&tg==0)
        {
            flag=1;
            break;
        }
        if(s[i]=='B'&&tb==0)
        {
            flag=1;
            break;
        }
        if(s[i]=='r')
            tr=1;
        if(s[i]=='g')
            tg=1;
        if(s[i]=='b')
            tb=1;
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
