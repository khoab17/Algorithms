#include <iostream>
using namespace std;
int Money_change_Fast(int m)
{
    int  ans;
    ans=m/10;
    m=m%10;
    ans+=(m/5);
    m=m%5;
    ans+=m;
    return ans;
}

int main()
{
    long long m;
    cin>>m;
    cout<<Money_change_Fast(m);

}