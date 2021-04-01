#include <iostream>
#include <vector>
#include<time.h>
#include <chrono>
using namespace std;



long long MaxPaiwiseProductFast(const vector<int>& numbers)
{

    int n=numbers.size();
    int max_index1=-1;
    for(int i=0;i<n;i++)
    {
        if((max_index1==-1) || (numbers[i]>numbers[max_index1]))
        {
            max_index1=i;
        }
    }
    int max_index2=-1;
    for(int j=0;j<n;j++)
    {
        if((j!=max_index1) && ((max_index2==-1 ) || (numbers[j]>numbers[max_index2])))
        {
            max_index2=j;
        }
    }
    //cout<<"\n"<<max_index1<<" "<<max_index2;
    long long result= ((long long) (numbers[max_index1])*(numbers[max_index2]));
    return result;
}

int main()
{
    auto start = chrono::steady_clock::now();
        int n=10000;
        cout<<n<<"\n";

        vector<int> a;
        for(int i=0;i<n;i++)
        {
            a.push_back(rand()%10000);
        }
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
       long long res= MaxPaiwiseProductFast(a);
       cout<<"Result:"<<res;

       auto end = chrono::steady_clock::now();

auto diff = end - start;
cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
 
}




