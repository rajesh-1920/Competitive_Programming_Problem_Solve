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
    int a,b,n;
    cin>>a>>b;
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a==1&&b>2)
        cout<<2<<endl;
    else if(a==1&&b==2)
        cout<<3<<endl;
    else
        cout<<a-1<<endl;
}
