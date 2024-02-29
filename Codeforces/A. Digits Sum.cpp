#include<iostream>
using namespace std;
void solve();
int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
   long long int n,res,m;
   cin>>n;
   if(n<9)
   {
       res=0;
   }
   else
   {
       res=n/10;
   }
   m=n%10;
   if(m==9)
   {
       res++;
   }
   cout<<res<<endl;
}
