#include <iostream>
using namespace  std;

void Selection_Sort(int *arr,int length)
{
    int minval;
    int minindex;
    for (int i=0;i<length-1;i++)
    {
       minindex=i;
       minval=arr[i];
        for (int j=i+1;j<length;j++)
        {
            if(arr[j]<minval)
            {
                minval=arr[j];
                minindex=j;
            }
        }
        arr[minindex]=arr[i];
        arr[i]=minval;
        
    }
}

int main()
{
    int arr[10]={5,4,3,2,1,3,8,10,36,33};
    Selection_Sort(arr,10);
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }

}