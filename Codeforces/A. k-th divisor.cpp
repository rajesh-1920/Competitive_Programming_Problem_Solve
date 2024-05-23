//Author : Rajesh Biswas
//Date : 31.08.2023
//Problem : A. k-th divisor
//Contest : ed round

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(void)
{
    ll n,k,i;
    vector<ll>vec;
    cin>>n>>k;
    for(i=1; i<=(n+1)/i; i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if(i!=(n/i))
                vec.push_back((n/i));
        }
    }
    sort(vec.begin(),vec.end());
    if(k>vec.size())
        cout<<-1<<endl;
    else
        cout<<vec[k-1]<<endl;
}
