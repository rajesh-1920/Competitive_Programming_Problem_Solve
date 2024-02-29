#include<iostream>
#include<math.h>
using namespace std;

void solve();
long long int find_even_digit(long long int x);
long long int reverse_x(long long int x);

int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    long long int n,dig,res;
    cin>>n;
    if(n%2==0)
    {
        res=0;
    }
    else
    {
        dig=find_even_digit(n);
        if(dig==0)
        {
            res=-1;
        }
        else if(dig==1)
        {
            res=1;
        }
        else
        {
            res=2;
        }
    }
    cout<<res<<endl;
}

long long int find_even_digit(long long int x)
{
    long long int digit=0,count_digit=1,m;
    x=reverse_x(x);
    while(x!=0)
    {
        m=x%10;
        x=x/10;
        if(m%2==0)
        {
            digit=count_digit;
            break;
        }
        count_digit++;
    }
    return digit;
}

long long int reverse_x(long long int x)
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
