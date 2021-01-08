#include <iostream>
#include<vector>
using namespace std;

int Solve(int n,vector<int> numbers)
{
}

int main()
{
    int n;
    cin>>n;
    int entry;
    vector<int> numbers;
    for(int i=0;i<n;i++)
    {
        cin>>entry;
        numbers.push_back(entry);
    }

    Solve(n,numbers);
    
}