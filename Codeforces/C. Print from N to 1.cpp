//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<iostream>
using namespace std;
void solve(int n)
{
    if(n==1)
    {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    solve(n-1);
}
int main(void)
{
    int n;
    cin>>n;
    solve(n);
}
