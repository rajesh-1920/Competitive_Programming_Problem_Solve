#include<iostream>
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
    long long int m,n,k;
    cin>>n>>m>>k;

    if((m-1+(n-1)*m==k)||(n-1+(m-1)*n==k))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

