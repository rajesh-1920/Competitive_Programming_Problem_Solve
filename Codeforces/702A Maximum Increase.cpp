#include<iostream>
using namespace std;
int main(void)
{
    long long int i,n,c=1,r=1;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
        if(r<c)
        {
            r=c;
        }
        if(a[i]>=a[i+1])
        {
            c=1;
        }
    }
    cout<<r<<endl;
}
