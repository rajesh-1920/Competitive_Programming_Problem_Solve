#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,a,b,c;
   cin>>t;
   while(t--)
    {
     cin>>a>>b>>c;
     if(a+b>=10)
     cout<<"yes"<<endl;
     else if(a+c>=10)
     cout<<"yes"<<endl;
     else if(b+c>=10)
     cout<<"yes"<<endl;
     else
     cout<<"no"<<endl;
    }
}
