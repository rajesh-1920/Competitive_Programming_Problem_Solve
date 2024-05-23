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
    long long int i,a[7],b[3];
    for(i=0; i<7; i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    b[1]=a[1];
    b[2]=a[2];
    if(a[2]==(a[0]+a[1]))
    {
        b[2]=a[3];
    }
    for(i=0; i<3; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

