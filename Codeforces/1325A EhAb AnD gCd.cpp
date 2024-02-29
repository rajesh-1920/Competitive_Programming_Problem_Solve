#include<iostream>
using namespace std;

long long int GCD(long long int a,long long  int b);

int main(void)
{
    long long int t,x,a,b,i,j,k,gcd;
    cin>>t;
    for(k=0; k<t; k++)
    {
        cin>>x;
        a=1;
        b=x-1;
        cout<<a<<" "<<b<<endl;
    }
}

long long int GCD(long long int a,long long  int b)
{
    long long int r;
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    r=a%b;
    a=b;
    b=r;
    if(b==0)
    {
        return a;
    }
}
