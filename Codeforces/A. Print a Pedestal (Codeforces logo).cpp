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
    long int n,h1,h2,h3;
    cin>>n;
    if(n%3==0)
    {
        h2=n/3;
        h1=h2+1;
        h3=h2-1;
    }
    if(n%3==2)
    {
        h2=(n/3)+1;
        h1=h2+1;
        h3=h2-2;
    }
    if(n%3==1)
    {
        h2=(n/3)+1;
        h1=h2+1;
        h3=h2-3;
    }
    if(n==7)
    {
        h2=(n/3);
        h1=h2+2;
        h3=h2-1;
    }
    cout<<h2<<" "<<h1<<" "<<h3<<endl;
}

