//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : Array Coloring
//Rating : 800
//Contest : Div.3

#include<iostream>
using namespace std;
void sol(void);
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        sol();
}
void sol(void)
{
    int n,x,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        sum+=x;
    }
    if(sum%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
