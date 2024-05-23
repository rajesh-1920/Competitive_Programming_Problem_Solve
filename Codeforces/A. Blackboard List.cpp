#include<iostream>
using namespace std;
int main(void)
{
    long long int t,k,i,n,r,f,maxm;
    cin>>t;
    for(k=0; k<t; k++)
    {
        cin>>n;
        f=0;
        long long int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                r=a[i];
                f=1;
            }
        }
        maxm=a[0];
        if(f!=1)
        {
            for(i=0; i<n; i++)
            {
                if(maxm<a[i])
                {
                    maxm=a[i];
                }
            }
            r=maxm;
        }
        cout<<r<<endl;
    }
}
