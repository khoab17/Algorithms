#include <iostream>
using namespace std;


void Factorial(int n)
{
    int i=2;
    int arr[10000]={0};
    arr[0]=1;
    int lenght=1;
    int count=0;
    int num=0;

    while(i<=n)
    {   
        count=0;
        num=0;

        while(count<lenght)
        {
            arr[count]=arr[count]*i;
            arr[count]=arr[count]+num;
            num=arr[count]/10;
            arr[count]=arr[count]%10;
            count++;
        }
        while(num!=0)
        {
            arr[lenght]=num%10;
            num=num/10;
            lenght++;
        }
        i++;
    }
    lenght--;

    while(lenght>=0)
    {
        cout<<arr[lenght];
        lenght--;
    }
}

int main()
{
    int n;
    cin>>n;
    Factorial(n);
}