#include<iostream>
#include <vector>
using namespace std;

int findmax(int a,int b)
{
    return (a>=b)? a:b;
}

int SolveDp(int W, const vector<int> &w,int n) {

  int** res = new int* [n+1];

  for (int i = 0; i <= n; i++) {
    res[i] = new int[W + 1];
  }

  for (int i=0; i<=n; i++) {
    for (int j = 0; j <= W; j++) {      
        if (i==0 || j==0) {
          res[i][j] = 0;
        }
        else if (w[i - 1] <= j) 
          res[i][j] = findmax(w[i-1]+res[i-1][j - w[i-1]], res[i-1][j]);
        else
          res[i][j] = res[i-1][j];
    }
  }
  int fires = res[n][W];

  for (int i = 0; i < n; i++) {
    delete[] res[i];
  }
  delete[] res;

  return fires;
}

int main()
{
    int cap;
    cin>>cap;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        
    cout<<SolveDp(cap,arr,n);
}