//Rajesh Biswas;
//date:08.03.2023

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int

int main(void)
{
    ll n,b,d,i,count=0,sum=0;
    cin>>n>>b>>d;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=b)
        {
            sum+=a[i];
            if(sum>d)
            {
                count++;
                sum=0;
            }
        }
    }
    cout<<count<<endl;
}
