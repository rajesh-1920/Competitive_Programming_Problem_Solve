//Author : Rajesh Biswas
//Date : 19.08.2023
//Problem : A. Cupboards
//Ratings : 800
//Contest : Div.2

#include<iostream>
using namespace std;
int main(void)
{
    int n,i,cl=0,cr=0;
    cin>>n;
    int l[n],r[n];
    for(i=0; i<n; i++)
    {
        cin>>l[i]>>r[i];
        if(l[i]==1)
            cl++;
        if(r[i]==1)
            cr++;
    }
    if(cl>(n-cl))
        cl=n-cl;
    if(cr>(n-cr))
        cr=n-cr;
    cout<<cl+cr<<endl;
}
