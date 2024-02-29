#include<iostream>
using namespace std;

long long int reverse_n(long long int x);

int main(void)
{
    long long int n,i,res,dig,count;
    cin>>n;
    if(n%10==0)
    {
        res=0;
    }
    else
    {
        n=reverse_n(n);
        if(n%10!=1)
        {
            res=0;
        }
        else
        {
            count=0;
            while(n>0)
            {
                dig=n%10;
                n=n/10;
                if(dig!=1&&dig!=4)
                {
                    res=0;
                    break;
                }
                if(dig==1)
                {
                    count=0;
                }
                else
                {
                    count++;
                }
                if(count>2)
                {
                    res=0;
                    break;
                }
                else
                {
                    res=1;
                }
            }
        }
    }
    if(res==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

long long int reverse_n(long long int x)
{
    long long int rev=0,m;
    while(x!=0)
    {
        m=x%10;
        x=x/10;
        rev=rev*10+m;
    }
    return rev;
}
