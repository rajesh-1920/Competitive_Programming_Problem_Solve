#include<iostream>
using namespace std;
void solve()
{
    long int l1,l2,l3;
    cin>>l1>>l2>>l3;
    if((l1+l2==l3)||(l3+l2==l1)||(l1+l3==l2)||(l1==l2&&l3%2==0)||(l3==l2&&l1%2==0)||(l1==l3&&l2%2==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
