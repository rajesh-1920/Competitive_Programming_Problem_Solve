#include<iostream>
using namespace std;
int solve(int x)
{
    if(x==1)
    {
        cout<<"I love Recursion"<<endl;
    }
    else
    {
        solve(x-1);
        cout<<"I love Recursion"<<endl;
    }
}
int main(void)
{
  int n;
  cin>>n;
  solve(n);
}
