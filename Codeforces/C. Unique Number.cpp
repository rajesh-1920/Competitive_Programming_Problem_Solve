#include<iostream>
#include<algorithm>
using namespace std;

void solve();
int reverse_n(int n);

int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    int x,i,h,num,count,res;
    cin>>x;
    if(x<10)
    {
        res=x;
    }
    else
    {
        i=9;
        h=x;
        num=count=0;
        while(h>0)
        {
           h=h-i;
           num=num*10+i;
           if(h<i)
           {
               i=h;
           }
           else
           {
               i--;
           }
           count++;
           if(count>9)
           {
               break;
           }
        }
        if(count>9)
        {
            res=-1;
        }
        else
        {
            res=reverse_n(num);
        }
    }
    cout<<res<<endl;
}

int reverse_n(int n)
{
    int rn=0,m;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        rn=rn*10+m;
    }
    return rn;
}
