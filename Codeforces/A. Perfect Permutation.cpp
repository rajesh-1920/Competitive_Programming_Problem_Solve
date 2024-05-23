//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : Perfect Permutation
//Rating : 800
//Contest : Div.2

#include<iostream>
using namespace std;
int main(void)
{
    int n,i;
    cin>>n;
    if(n%2==0)
    {
        for(i=1; i<=n; i+=2)
            cout<<i+1<<" "<<i<<" ";
        cout<<endl;
    }
    else
        cout<<-1<<endl;
}
