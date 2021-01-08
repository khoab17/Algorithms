#include <iostream>


long long  fibonacci_fast(int n) {

    long long arr[n];
    arr[0]=0;
    arr[1]=1;
    //int count;
    for(int i=2;i<=n;i++)
    {
        arr[i%2]=(arr[0]+arr[1])%10;
       // count=i%2;
    }

    return arr[n%2];
}


int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
