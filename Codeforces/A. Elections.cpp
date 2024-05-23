#include<iostream>
using namespace std;
int main(void)
{
    long long int a,b,c,test,r1,r2,r3;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        if(a==b&&b==c)
        {
            r1=r2=r3=1;
        }
        else
        {
            if(a>=b&&a>=c)
            {
                r2=a-b+1;
                r3=a-c+1;
                r1=0;
                if(a==b||a==c)
                {
                    r1=1;
                }
            }
            else if(b>=a&&b>=c)
            {
                r1=b-a+1;
                r3=b-c+1;
                r2=0;
                if(a==b||b==c)
                {
                    r2=1;
                }
            }
            else if(c>=a&&c>=b)
            {
                r1=c-a+1;
                r2=c-b+1;
                r3=0;
                if(c==b||a==c)
                {
                    r3=1;
                }
            }
        }
        cout<<r1<<" "<<r2<<" "<<r3<<endl;
    }
}
