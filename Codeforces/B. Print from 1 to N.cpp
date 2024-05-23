#include<iostream>
using namespace std;
void solve(int x)
{
    if(x==1)
    {
        cout<<x<<endl;
    }
    else
    {
        solve(x-1);
        cout<<x<<endl;
    }
}
int main(void)
{
  int n;
  cin>>n;
  solve(n);
}
