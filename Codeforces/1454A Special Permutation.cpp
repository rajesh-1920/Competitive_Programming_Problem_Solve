#include<iostream>
using namespace std;
int main(void)
{
    int n,t,i,j,k;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        if(n==2)
        {
            cout<<2<<" "<<1<<endl;
        }
        else
        {
            for(j=2; j<=n; j++)
            {
                cout<<j<<" ";
            }
            j=1;
            cout<<j<<endl;
        }
    }
}
