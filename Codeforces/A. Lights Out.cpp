//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : A. Lights Out
//Rating : 900
//Contest : Div.2

#include<iostream>
using namespace std;
int main(void)
{
    int ar[3][3],i,j,res[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>ar[i][j];
    }
    //-------------------------------------------
    if((ar[0][0]+ar[0][1]+ar[1][0])%2==0)
        res[0][0]=1;
    else
        res[0][0]=0;
    if((ar[0][0]+ar[0][1]+ar[0][2]+ar[1][1])%2==0)
        res[0][1]=1;
    else
        res[0][1]=0;
    if((ar[0][2]+ar[0][1]+ar[1][2])%2==0)
        res[0][2]=1;
    else
        res[0][2]=0;
    //------------------------------------------------
    if((ar[1][0]+ar[0][0]+ar[2][0]+ar[1][1])%2==0)
        res[1][0]=1;
    else
        res[1][0]=0;
    if((ar[1][0]+ar[0][1]+ar[2][1]+ar[1][1]+ar[1][2])%2==0)
        res[1][1]=1;
    else
        res[1][1]=0;
    if((ar[0][2]+ar[1][2]+ar[1][1]+ar[2][2])%2==0)
        res[1][2]=1;
    else
        res[1][2]=0;
    //----------------------------------------------------------
    if((ar[2][2]+ar[2][1]+ar[1][2])%2==0)
        res[2][2]=1;
    else
        res[2][2]=0;
    if((ar[2][0]+ar[2][1]+ar[2][2]+ar[1][1])%2==0)
        res[2][1]=1;
    else
        res[2][1]=0;
    if((ar[2][0]+ar[2][1]+ar[1][0])%2==0)
        res[2][0]=1;
    else
        res[2][0]=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<res[i][j];
        cout<<endl;
    }
}
