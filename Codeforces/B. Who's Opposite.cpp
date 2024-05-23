#include<iostream>
using namespace std;

int main(void)
{
  long long int test,a,b,c,np,h,res;
  cin>>test;
  while(test--)
  {
    cin>>a>>b>>c;
    h=a-b;
    if(h<0)
    {
      h=-h;
    }
    np=h*2;
    if(np<c||np<=2||np<a||np<b)
    {
      res=-1;
    }
    else
    {
       if(c>h)
       {
         res=c-h;
       }
       else
       {
          res=h+c;
       }
    }
    cout<<res<<endl;
  }
}
