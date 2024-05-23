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
    int b,c,h,count=0;
    cin>>b>>c>>h;
    while(1)
    {
        if(c==0||b==1)
            break;
        count+=2;
        c--;
        b--;
    }
    while(1)
    {
        if(h==0||b==1)
            break;
        count+=2;
        h--;
        b--;
    }
    count++;
    cout<<count<<endl;
}
