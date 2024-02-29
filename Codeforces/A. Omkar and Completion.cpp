#include<iostream>
using namespace std;

void solve();

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
    long long int n,i,res=5;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<res<<" ";
    }
    cout<<endl;
}
