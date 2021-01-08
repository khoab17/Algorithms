#include<iostream>
#include <vector>
using namespace std;
int findMax(int a,int b)
{
    return (a>=b)?a:b;
}

int SolveDp(int *arr,int n,int cap)
{
    vector<vector<int>> res(n+1,vector<int>(cap+1,0));
    int i,j;

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=cap+1;j++)
        {
            if(i==0 || j==0)
            {
                res[i][j]=0;
            }

            else if(arr[i-1]<=j)
            {
                res[i][j]=findMax((res[i-1][j-arr[i-1]])+arr[i-1],res[i-1][j]);
            }
            else 
            {
                  res[i][j]=res[i-1][j];
            }     
        }
    }
    //cout<<n-1<<"  "<<cap-1<<"  ";
    return res[n][cap];
}

int main()
{
    int cap;
    cin>>cap;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        
    cout<<SolveDp(arr,n,cap);
}