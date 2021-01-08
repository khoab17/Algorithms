#include <iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr,vector<int>& temp, int left, int mid, int right) 
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

int mergeSort(vector<int>& arr,vector<int>& temp,int low ,int high)
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
    int n,in;
    cin>>n;
    vector <int>  vec(n);
    for(int i=0;i<n;i++)
    {   
        in=rand()%10000;
        vec.push_back(in);
    }
    vector<int> temp(n);
    cout<<mergeSort(vec,temp,0,n-1);
}