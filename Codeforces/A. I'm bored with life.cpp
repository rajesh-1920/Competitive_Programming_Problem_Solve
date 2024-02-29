#include<iostream>
using namespace std;
long long int fact(long long int n)
{
    long long int i,fac=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main(void)
{
    long long int a,b;
    cin>>a>>b;
    if(a>b)
    {
        a=b;
    }
    cout<<fact(a)<<endl;
}
