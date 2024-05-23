#include<iostream>
using namespace std;
long long int solve(long long int n,long long int m)
{
    if(n==m)
    {
        return 1;
    }
    else if(n>m)
    {
        return 0;
    }
    else
    {
        return solve(n+1,m)+solve(n+2,m)+solve(n+3,m);
    }
}

int main(void)
{
  long long int s,e,result;
  cin>>s>>e;
  result=solve(s,e);
  cout<<result<<endl;
}
