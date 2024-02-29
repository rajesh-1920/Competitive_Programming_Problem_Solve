#include<iostream>
#include<algorithm>
using namespace std;
void solve();
int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    long long int n,sum=0;
    cin>>n;
    while(1)
    {
        if(n==1)
        {
            sum=sum+n;
            break;
        }
        sum=sum+n;
        n=n/2;
    }
    cout<<sum<<endl;
}
