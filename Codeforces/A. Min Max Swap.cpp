#include<iostream>
using namespace std;

void solve()
{
    int n,i,temp,maxa,maxb;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    maxa=maxb=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
        if(a[i]>maxa)
        {
            maxa=a[i];
        }
        if(b[i]>maxb)
        {
            maxb=b[i];
        }
    }
    cout<<maxa*maxb<<endl;
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
