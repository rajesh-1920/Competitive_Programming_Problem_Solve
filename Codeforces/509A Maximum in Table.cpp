#include<iostream>
using namespace std;
int main(void)
{
    long int i,n,j,r=1;
    cin>>n;
    long long int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==0||i==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
            if(r<a[i][j])
            {
                r=a[i][j];
            }
        }
    }
    cout<<r<<endl;
}
