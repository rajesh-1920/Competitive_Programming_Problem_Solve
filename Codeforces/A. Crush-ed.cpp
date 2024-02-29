#include<iostream>
using namespace std;
int main(void)
{
    long long int t,n,i,c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        long long int a[n],j,k;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(j=0; j<n; j++)
        {
            for(k=0; k<n-1; k++)
            {
                if(a[k]>a[k+1])
                {
                    a[k]=a[k]+a[k+1];
                    a[k+1]=a[k]-a[k+1];
                    a[k]=a[k]-a[k+1];
                }
            }
        }
        c=1;
        for(j=0; j<n-1; j++)
        {
            if(a[j]!=a[j+1])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
