#include<iostream>
#include<algorithm>
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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[1]+a[2]>=10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
