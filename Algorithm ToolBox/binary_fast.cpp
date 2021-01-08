#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int binary_search(const vector<int> &a, int x,int low, int high) {

  if(high<low)
  {
      return -1;
  }
  else
  {
      int mid =low+(high-low)/2;
      if(x==a[mid])
      {
          return mid;
      }
      else{
          if(x>a[mid])
          {
              binary_search(a,x,mid+1,high);
          }
          else if(x<a[mid])
          {
              binary_search(a,x,low,mid-1);
          }
      }
  }

  
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int size=a.size()-1;
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    cout<<binary_search(a,b[i],0,size)<<" ";
  }
}

