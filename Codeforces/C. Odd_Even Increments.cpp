#include<iostream>
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
    int n,i,odd1=0,odd0=0,even1=0,even0=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i+=2)
    {
        if(a[i]%2==0)
        {
            even0++;
        }
        else
        {
            odd0++;
        }
    }
    for(i=1;i<n;i+=2)
    {
        if(a[i]%2==0)
        {
            even1++;
        }
        else
        {
            odd1++;
        }
    }
    if((even1==0&&(even0==0||odd0==0))||(odd1==0&&(even0==0||odd0==0)))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
