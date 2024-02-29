#include<iostream>
using namespace std;

int main(void)
{
    int n,k,r1,r2,result=0,temp;
    string si,so; //i=inputed,o=original
    cin>>n>>si>>so;
    for(k=0; k<n; k++)
    {
        if(si[k]<so[k])
        {
            temp=si[k];
            si[k]=so[k];
            so[k]=temp;
        }
        r1=si[k]-so[k];
        r2=9-si[k]+1+so[k];
        if(r1>r2)
        {
            r1=r2;
        }
        result=result+r1;
    }
    cout<<result<<endl;
}
