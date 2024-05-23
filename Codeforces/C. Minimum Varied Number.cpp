#include<iostream>
using namespace std;

long int rev_num(long int n);

void solve()
{
    long int n,i,s,num;
    cin>>n;
    s=num=0;
    for(i=9; i>=1; i--)
    {
        s=s+i;
        if(s>=n)
            break;
        num=num*10+i;
    }
    num=num*10+(n-s+i);
    cout<<rev_num(num)<<endl;
}

int main(void)
{
    long int test;
    cin>>test;
    while(test--)
        solve();
}

long int rev_num(long int n)
{
    long int m,rev=0;
    while(n>0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    return rev;
}
