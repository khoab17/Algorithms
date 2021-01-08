#include <iostream>
using namespace std;


long long greatest_common_devisor(long x,long y)
{   
    long n=x+y;
    if(x==0 || y==0)
    {
        return 1;
    }
    for (int i=0;i<n;i++)
    {
        if (y==0)
        {
            return x;
            break;
        }
        else
        {
            int temp=x;
            x=y;
            y=temp%y;
        }
        
    }
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<greatest_common_devisor(a,b);
}