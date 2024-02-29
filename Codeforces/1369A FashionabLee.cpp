#include<iostream>
using namespace std;
int main(void)
{
    long long int i,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
