#include<iostream>
using namespace std;

void solve();
long long int nm_of_digits(long long int n);
long long int power(long long int n);

int main(void)
{
    long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    long long int m,dig,result;
    cin>>m;
    dig=nm_of_digits(m)-1;
    result=m-power(dig);
    cout<<result<<endl;
}


long long int nm_of_digits(long long int n)
{
    long long int d=0;
    while(n!=0)
    {
        d++;
        n=n/10;
    }
    return d;
}
long long int power(long long int n)
{
    long long int i,pow=1;
    for(i=0;i<n;i++)
    {
        pow=pow*10;
    }
    return pow;
}
