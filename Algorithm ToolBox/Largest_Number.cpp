// C++ program to generate largest possible 
// number with given digits 
#include <bits/stdc++.h> 

using namespace std; 

// Function to generate largest possible 
// number with given digits 
void findMaxNum(int arr[], int n) 
{ 
	// Declare a hash array of size 10 
	// and initialize all the elements to zero 
	int hash[10] = {0}; 
	
	// store the number of occurrences of the digits 
	// in the given array into the hash table 
	for(int i=0; i<n; i++) 
	{ 
		hash[arr[i]]++; 
	} 
	
	// Traverse the hash in descending order 
	// to print the required number 
	for(int i=9; i>=0; i--) 
	{ 
		// Print the number of times a digits occurs 
		for(int j=0; j<hash[i]; j++) 
			cout<<i; 
	} 
} 

// Driver code 
int main() 
{ 
    int n;
    cin>>n;
	int arr[n]; 

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	
	//int n = sizeof(arr)/sizeof(arr[0]); 
	
	findMaxNum(arr,n); 
	
	return 0; 
} 
