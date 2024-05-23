//Author : Rajesh Biswas
//Date : 12.08.20203
//Problem : Raising Bacteria
//Rating : 1000

#include<iostream>
using namespace std;
int main(void)
{
    long long int x,count=0;
    cin>>x;
    while(x>0)
    {

        if(x%2==0)
            x=x/2;
        else
        {
            count++;
            x--;
        }
    }
    cout<<count<<endl;
}
