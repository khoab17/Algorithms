#include <iostream>
using namespace std;

void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void partition(int a[], int low, int high, int &i, int &j) 
{ 
    if (high-low<=1) 
    { 
        if (a[high] < a[low]) 
        {
        swap(&a[high], &a[low]); 
        }
        i = low; 
        j = high; 
        return; 
    } 
  
    int mid = low; 
    int pivot = a[high]; 
    while (mid <= high) 
    { 
        if (a[mid]<pivot) 
            swap(&a[low++], &a[mid++]); 
        else if (a[mid]==pivot) 
            mid++; 
        else if (a[mid]>pivot) 
            swap(&a[mid],&a[high--]); 
    } 
    i = low-1; 
    j = mid;
} 

void QuickSort(int arr[],int low,int high)
{
    int i,j;
    if (low<high)
    {
        partition(arr,low,high,i,j);
        QuickSort(arr,low,i);
        QuickSort(arr,j,high);
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