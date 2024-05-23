//Rajesh Biswas;
//date:08.03.2023

#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<iomanip>
using namespace std;
#define ld double
#define ll long long int

int main(void)
{
    ld l,max_d=0;
    ll n,i;
    cin>>n>>l;
    ld a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>max_d)
            max_d=a[i+1]-a[i];
    }
    if(a[0]!=0&&(2*a[0])>max_d)
        max_d=2*a[0];
    if(a[n-1]!=l&&(2*(l-a[n-1]))>max_d)
        max_d=2*(l-a[n-1]);
    cout<<showpoint<<fixed<<setprecision(10)<<max_d/2.00<<endl;
}
