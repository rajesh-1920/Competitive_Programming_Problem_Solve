#include<iostream>
using namespace std;
void solve();

int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    int n,i,mihai=0,bianca=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            mihai+=a[i];
        }
        else
        {
            bianca+=a[i];
        }
    }
    if(mihai>bianca)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
