#include <iostream>
using namespace std;

void Solve(int n)
{

    int arr[100000];
    int count=0;
    int size=n;
    
    if(n > 0)
    {
    arr[0]=0;
    for (int i=1;i<=size;i++)
    {
        arr[i]=arr[i-1]+1;
        if(arr[i]>n)
        {   
            arr[i-1]=arr[i-1]+n;
            break;
        }
        else
        {
            n=n-arr[i];
            count++;
        }      
    }
    }
    else
    {
      cout<<0<<endl;
    }
    
    cout<<count<<endl;

    for(int j=1;j<=count;j++)
    {
        cout<<arr[j]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    Solve(n);
}