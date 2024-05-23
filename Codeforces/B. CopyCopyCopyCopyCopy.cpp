#include<iostream>
#include<algorithm>
using namespace std;
void sol()
{
    long long int i,j,n,count;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    count=1;
    for(i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main(void)
{
    long int i,test;
    cin>>test;
    for(i=0; i<test; i++)
    {
        sol();
    }
}
