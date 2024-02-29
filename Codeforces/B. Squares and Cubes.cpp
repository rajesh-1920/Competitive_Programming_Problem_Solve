#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long int n,i,sq,qb,count=0;
    cin>>n;
    for(i=1;;i++)
    {
        sq=i*i;
        if(sq>n)
        {
            break;
        }
        count++;
    }
    for(i=1;;i++)
    {
        qb=i*i*i;
        if(qb>n)
        {
            break;
        }
        count++;
    }
    for(i=1;;i++)
    {
        qb=i*i*i;
        if(qb>n)
        {
            break;
        }
        double root=sqrt((double)qb);
        double rnd=trunc(root);
        if(rnd==root)
        {
            count--;
        }
    }
    cout<<count<<endl;
}

int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
