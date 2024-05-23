#include<iostream>
using namespace std;
int main(void)
{
    long int t,i,n,m,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        if(n%2==0||m%2==0)
        {
            r=n*m/2;
        }
        else
        {
            r=((n-1)*m/2)+((m-1)/2)+1;
        }
        cout<<r<<endl;
    }
}
