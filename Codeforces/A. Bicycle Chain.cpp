//Author : Rajesh Biswas
//Date : 28.08.2023
//Problem : A. Bicycle Chain
//Ratings : 900
//Contest : Div-2

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n,m,i,b,count=1;
    vector<int> vec;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    while(m--)
    {
        cin>>b;
        for(i=0; i<n; i++)
        {
            if(b%a[i]==0)
                vec.push_back(b/a[i]);
        }
    }
    sort(vec.rbegin(),vec.rend());
    for(i=1; i<vec.size(); i++)
    {
        if(vec[0]==vec[i])
            count++;
    }
    cout<<count<<endl;
}
