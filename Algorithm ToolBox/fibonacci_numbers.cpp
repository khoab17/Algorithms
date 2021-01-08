#include<iostream>
using namespace std;

long long  fibonacci_fast(int n) {

    long long arr[n];
    arr[0]=0;
    arr[1]=1;
    //int count;
    for(int i=2;i<=n;i++)
    {
        arr[i%2]=arr[0]+arr[1];
       // count=i%2;
    }

    return arr[n%2];
}


int main()
{
    int n;
    cin>>n;
    long long int ans = fibonacci_fast(n);
    cout<<ans;
}