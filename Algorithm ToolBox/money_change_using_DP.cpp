#include<iostream>
using namespace std;

int retmin(int a,int b)
{
    return (a<=b)? a:b;
}

int Solve(int arr[],int money)
{
    int res[money+1];
    res[0]=0;
    for(int i=1;i<money+1;i++)
        res[i]=money+1;
    
    for(int i=1;i<money+1;i++)
    {
        if(i>=arr[0])
        {
           res[i]=retmin(res[i-arr[0]]+1,res[i]);
        }
         if(i>=arr[1])
        {
           res[i]=retmin(res[i-arr[1]]+1,res[i]);
        }
         if(i>=arr[2])
        {
           res[i]=retmin(res[i-arr[2]]+1,res[i]);
        }
    }
    return res[money];
}

int main()
{
    int coins[3]={1,3,4};
    int money;
    cin>>money;
    cout<<Solve(coins,money);
}