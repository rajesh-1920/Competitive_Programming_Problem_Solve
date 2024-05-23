#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,even=0,odd=0,pos=0,neg=0;
    for(i=0;i<5;i++)
    {
        cin>>n;
        if(n&1)
        odd++;
        else
        even++;
        if(n>0)
        pos++;
        else if(n<0)
        neg++;
    }
    cout<<even<< " valor(es) par(es)\n";
    cout<<odd<< " valor(es) impar(es)\n";
    cout<<pos<< " valor(es) positivo(s)\n";
    cout<<neg<< " valor(es) negativo(s)\n";
    
}