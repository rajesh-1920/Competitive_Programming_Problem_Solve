//Author : Rajesh Biswas
//Date : 23.08.2023
//Problem : A. Dima and Friends
//Ratings : 1000
//Contest : Div.2

#include<iostream>
using namespace std;
int main(void)
{
    int n,i,sum=0,count=0,pos;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0; i<5; i++)
    {
        if((sum+i+1)%(n+1)!=1)
            count++;
    }
    cout<<count<<endl;
}
