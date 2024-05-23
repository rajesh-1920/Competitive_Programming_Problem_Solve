#include<iostream>
using namespace std;
int main(void)
{
    long long int t,i,a,b,c,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(b>c)
        {
            r=b-1;
        }
        else if(c>b)
        {
            r=(c-b)+(c-1);
        }
        if(r>(a-1))
        {
            cout<<"1"<<endl;
        }
        else if(r==(a-1))
        {
            cout<<"3"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
}
