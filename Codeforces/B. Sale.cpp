//Author : Rajesh Biswas
//Date : 14.08.2023
//Problem : Sale
//Ratings : 900
//contest : Div.2 (Beta Round 34)

#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int m,n,res=0,i;
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<m; i++)
    {
        if(a[i]>0)
            break;
        res+=abs(a[i]);
    }
    cout<<res<<endl;
}
