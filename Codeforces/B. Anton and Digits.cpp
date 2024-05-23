#include<iostream>
using namespace std;
int main(void)
{
    long long int k2,k3,k5,k6,res=0;
    cin>>k2>>k3>>k5>>k6;
    if(k5>k6)
        k5=k6;
    if(k2>=k5)
    {
        res=256*k5;
        k2=k2-k5;
    }
    else
    {
        res=256*k2;
        k2=0;
    }
    if(k2>k3)
        k2=k3;
    res=res+(32*k2);
    cout<<res<<endl;
}
