#include <iostream>
using namespace std;

int Majority_element_naive(int arr[],int n)
{
    int current_element;
    int count;
    for(int i=0;i<n;i++)
    {
        current_element=arr[i];
        count=0;
        for(int j=0;j<n;j++)
        {
            if (arr[j]==current_element)
            count++;
            if(count>n/2)
            return i+1;
        }
    }
    return 0;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n ;i++)
  {
      cin>>arr[i];
  }
  cout<<Majority_element_naive(arr,n);
}

