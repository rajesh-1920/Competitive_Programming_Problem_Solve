//Author : Rajesh Biswas
//Date : 14.08.2023
//Problem : New Year's Number
//Rating : 900
//Contest : Div.3

#include<iostream>
using namespace std;
void solve(void);
int main(void)
{
    long int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    long int year;
    cin>>year;
    while(1)
    {
        if(year%2020==0||year%2021==0)
        {
            cout<<"YES"<<endl;
            break;
        }
        if(year%10!=0)
            year-=2021;
        else
            year-=2020;
        if(year<0)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
}
