#include <iostream>
#include <random>
using namespace std;

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}


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

int main() {
  long long a, b;
  for (int i=0;i<10000;i++)
  { a=rand()%10000;
    b=rand()%10000;
  int res1= gcd_naive(a, b);
  int res2=greatest_common_devisor(a,b);
  if(res1!=res2)
  {   cout<<"A:B "<<a<<" "<<b<<endl;
      cout<<res1<<" "<<res2<<endl;
      cout<<"Bug Bug!"<<endl;
  }
  else
  {
      cout<<"Ok"<<endl;
  }
  
  }
  return 0;
}
