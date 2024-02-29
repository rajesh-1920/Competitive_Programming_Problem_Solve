#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
    long long int n,sum1,sum2,i,t,j,r;
    double x;
    cin>>t;
    for(i=0; i<t; i++)
    {
        sum1=sum2=0;
        cin>>n;
        x=(double)n;
        sum1=(int)pow(2.0,x);
        for(j=1;j<n/2;j++)
        {
            x=(double)j;
            r=(int)pow(2.0,x);
            sum1=sum1+r;
        }
        sum2=0;
        for(j=n/2;j<n;j++)
        {
            x=(double)j;
            r=(int)pow(2.0,x);
            sum2=sum2+r;
        }
        cout<<sum1-sum2<<endl;
    }
}
