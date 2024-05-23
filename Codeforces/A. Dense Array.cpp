//Author : Rajesh Biswas
//Date : 18.08.2023
//Problem : Dense Array
//Rating : 800
//Contest : Div.3

#include<iostream>
#include<bits/stdc++.h>
#include<iterator>
#include<list>
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
    int n,i,ma,mi,x1,x2,c;
    list<int> a;
    list<int>::iterator it;
    cin>>n;
    c=n;
    while(n--)
    {
        cin>>i;
        a.push_back(i);
    }
    n=c;
    while(1)
    {
        i=0;
        for(it=a.begin();;)
        {
            x1=*it;
            it++;
            if(it==a.end())
                break;
            x2=*it;
            ma=max(x1,x2);
            mi=min(x1,x2);
            if(ma/mi>2||(ma/mi==2&&ma%mi!=0))
            {
                a.insert(it,mi*2);
                n++;
            }
            i++;
        }
        if(i==n-1)
            break;
    }
    cout<<n-c<<endl;
}
