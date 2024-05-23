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
    long long int i,j,p;
    cin>>p;
    i=2;
    j=p-1;
    cout<<i<<" "<<j<<endl;
}
