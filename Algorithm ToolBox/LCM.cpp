#include<iostream>
using namespace std;

long long GCD(int a,int b)
{
    if(b==0)
     return a;
    return GCD(b,a%b);

}

long long LCM(int a,int b)
{
    return (long long)a*b/GCD(a,b);
}


int main()
{
    int a,b;
    cin>>a>>b;

    long long res=LCM(a,b);
    cout<<res;
    
}