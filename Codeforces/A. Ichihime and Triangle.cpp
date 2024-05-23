#include<iostream>
using namespace std;
int main(void)
{
    long long int a,b,c,d,x,y,z,test,cheak;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c>>d;
        x=b;
        y=c;
        z=b+c-1;
        if(z>d)
        {
            z=d;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
