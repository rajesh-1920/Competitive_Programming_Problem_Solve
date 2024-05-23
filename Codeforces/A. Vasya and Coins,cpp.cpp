#include<iostream>
using namespace std;
int main(void)
{
    long long int a,b,test,result;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a==0)
        {
            result=1;
        }
        else
        {
            result=1+a+b*2;
        }
        cout<<result<<endl;
    }
}
