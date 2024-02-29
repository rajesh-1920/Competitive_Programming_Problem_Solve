//Author : Rajesh Biswas
//Date : 11.08.2023
//Problem : Football

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(void)
{
    int n,i,team1=1,team2=0;
    cin>>n;
    char s[n][11];
    for(i=0; i<n; i++)
        cin>>s[i];
    for(i=1; i<n; i++)
    {
        if(strcmp(s[0],s[i])==0)
            team1++;
        else
            strcpy(s[1],s[i]);
    }
    team2=n-team1;
    if(team1>team2)
        cout<<s[0]<<endl;
    else
        cout<<s[1]<<endl;
}
