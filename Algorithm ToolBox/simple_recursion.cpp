#include <iostream>
using namespace std;

int reccur_factorial(int num)
{
    if(num != 0)
    {
        return (num*reccur(num-1));
    }
    else 
    return 1;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<"Total:"<<reccur_factorial(n);
}