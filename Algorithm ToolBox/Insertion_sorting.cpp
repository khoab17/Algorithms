#include <iostream>
using namespace std;

void Insertion_Sort(int *arr,int n)
{
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[]={8,3,5,6,2};
    Insertion_Sort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
}