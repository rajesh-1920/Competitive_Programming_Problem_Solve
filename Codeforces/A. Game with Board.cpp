#include<iostream>
using namespace std;
void solve();

int test,n;
int main(void)
{
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    cin>>n;
    if(n>4)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }
}
