#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Bubble_sort(int *arr,int length)
{
    for (int i=0;i<=length-1;i++)
    {   
        int flag=0;
        for (int j=0;j<=length-1;j++)
        {
        if (arr[j]>arr[j+1])
        {
            Swap(&arr[j],&arr[j+1]);
            flag++;
        }
        }
        if (flag==0)
        break;
    }
}

int main()
{
    int arr[5]={10,5,2,7,4};
    Bubble_sort(arr,5);
    for (int i=0;i<=4;i++)
    {
        cout<<arr[i]<<'\t';
    }

}