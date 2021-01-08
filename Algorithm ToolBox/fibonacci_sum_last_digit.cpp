#include<iostream>
using namespace std;

long long  fibonacci_sum_last(int n) {
    if(n<=1)
    {return n;}
    long long prev=0;
    long long cur=1;
    long long sum=1;
    for (long long i=0;i<n-1;i++)
    {
        long long temp=prev;
        prev=cur;
        cur=temp+cur;
        sum+=cur;
    }

    return sum;
}
int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum ;
}

int main() {
    long long n = 0;
    cin >> n;
    cout<<fibonacci_sum_last(n)<<endl;
    cout<<fibonacci_sum_naive(n);
}
