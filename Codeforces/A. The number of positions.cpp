//Author : Rajesh Biswas
//Date : 14.09.2023

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,a,b;
    cin>>n>>a>>b;
    n-=a;
    if(n>b)
        cout<<b+1<<"\n";
    else
        cout<<n<<"\n";
}
