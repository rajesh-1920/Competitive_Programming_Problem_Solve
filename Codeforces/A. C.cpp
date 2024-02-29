#include<iostream>
using namespace std;

void sol()
{
  long long int a,b,n,count=0;
  cin>>a>>b>>n;
  while(1)
  {
      if(a>n||b>n)
      {
          break;
      }
     if(a>b)
    {
      b+=a;
    }
    else
    {
      a+=b;
    }
    count++;
  }
  cout<<count<<endl;
}

int main(void)
{
  long int i,test;
  cin>>test;
  for(i=0;i<test;i++)
  {
    sol();
  }
}
