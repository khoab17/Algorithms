#include <iostream>
using namespace std;

int merge(int arr[],int temp[], int left, int mid, int right) 
{ 
	int i, j, k; 
	int count=0; 
	i=left;
	j=mid;
	k=left;
	while ((i<=mid-1) && (j<=right))
     { 
		if (arr[i]<=arr[j]) { 
			temp[k++] = arr[i++]; 
		} 
		else { 
			temp[k++]=arr[j++]; 
			count=count + (mid - i); 
		} 
	} 
	while (i <= mid - 1) 
		temp[k++] = arr[i++]; 

	while (j <= right) 
		temp[k++] = arr[j++]; 
	for (i = left; i <= right; i++) 
		arr[i] = temp[i]; 

	return count; 
} 

int mergeSort(int arr[],int temp[],int low ,int high)
{
    int inversion=0;
    if(low<high)
    {
        int mid=(low+high)/2;
        inversion+=mergeSort(arr,temp,low,mid);
        inversion+=mergeSort(arr,temp,mid+1,high);
        inversion+=merge(arr,temp,low,mid+1,high);
    }
    return inversion;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
	cout<<n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp[n]={};
    cout<<mergeSort(arr,temp,0,n-1);
}