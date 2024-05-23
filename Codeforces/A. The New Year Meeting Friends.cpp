#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int x[3];
    cin>>x[0]>>x[1]>>x[2];
    sort(x,x+3);
    cout<<x[2]-x[0]<<endl;
}
