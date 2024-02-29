//Rajesh Biswas
//Date: 06.08.20203

#include<iostream>
using namespace std;
#define ll long long int
int main(void)
{
    ll n,ld,sd,nd;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        ld=n%10;
        nd=n/10;
        n=n/100;
        sd=n*10+ld;
        if(sd>nd)
            cout<<sd<<endl;
        else
            cout<<nd<<endl;
    }
}
