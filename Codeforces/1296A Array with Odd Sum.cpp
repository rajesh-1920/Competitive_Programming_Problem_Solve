#include<iostream>
using namespace std;
int main(void)
{
    long long int n,t,i,j,sum;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        sum=0;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }
        cout<<sum<<endl;
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
