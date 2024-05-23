#include<iostream>
#include<math.h>
using namespace std;
int cheak_prime(long long int n);
int main(void)
{
    long long int n,x,test;
    cin>>n;
    while(n--)
    {
        cin>>x;
        double sq,sqr;
        sq=sqrt((double)x);
        sqr=trunc(sq);
        if(sqr-sq==0)
        {
            test=cheak_prime((long long int)sqr);
            if(test==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int cheak_prime(long long int n)
{
    long long int i,check;
    if(n==1)
    {
        return 0;
    }
    else if(n==2||n==3)
    {
        return 1;
    }
    else
    {
        check=1;
        if(n%2==0||n%3==0)
        {
            return 0;
        }
        else
        {
            for(i=5; i*i<=n; i=i+6)
            {
                if(n%i==0||(n%(i+2))==0)
                {
                    check==0;
                    return 0;
                    break;
                }
            }
            if(check==1)
            {
                return 1;
            }
        }
    }
}
