#include <iostream>
using namespace std;

int partition(int arr[],int low , int high)
{
    int i=low+1;
    int pivot=arr[low];
    for(int j=low+1;j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[low],arr[i-1]);
    return i-1;
}

void QuickSort(int arr[],int low,int high)
{
    int j;
    if (low<high)
    {
        j=partition(arr,low,high);
        QuickSort(arr,low,j);
        QuickSort(arr,j+1,high);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}