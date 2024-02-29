#include<iostream>
using namespace std;
int main(void)
{
    long long int n,t,i,j,k,l;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        int b[n];
        for(j=0; j<n; j++)
        {
            cin>>b[j];
        }
        k=0;
        l=n-1;
        for(j=0; j<n; j++)
        {
            if(j%2==0)
            {
                cout<<b[k]<<" ";
                k++;
            }
            else
            {
                 cout<<b[l]<<" ";
                l--;
            }
        }
        cout<<endl;
    }
}
