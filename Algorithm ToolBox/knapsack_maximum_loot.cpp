#include <iostream>
#include <vector>

using namespace std;

struct Item{
    int value;
    int weight;
    double profit;
};
/*
void Insertion_Sort(Item *item,int n)
{
    int i,j;
    double key;
    for (i=1;i<n;i++)
    {
        key=item[i].profit;
        j=i-1;
        while(j>=0 && item[j].profit>key)
        {
          
         item[j+1].profit=item[j].profit;
         item[j+1].weight=item[j].weight;
         item[j+1].value=item[j].value;
            j=j-1;
        }
        item[j+1].profit=key;
    }
}*/

double get_optimal_value(int capacity, vector<int>& weights, vector<int>& values) {
  double value = 0.0;
    double profit[1000];
  for(int i=0;i<(int)weights.size();i++)
  {
      profit[i]=(double)values[i]/(double)weights[i];
  }
    int size=(int)weights.size();
    int i,j;
    double key;
    for (i=1;i<size;i++)
    {
        cout<<profit[i]<<endl;
        key=profit[i];
        j=i-1;
        while(j>=0 && profit[i]>key)
        {
        cout<<profit[j]<<"   "<<endl;
         profit[j+1]=profit[j];
         weights[j+1]=weights[j];
         values[j+1]=values[j];
        j=j-1;
        }
        profit[j+1]=key;
        
    }
  

  for(int i=0;i<(int)weights.size();i++)
  {
      cout<<"\n\nProfit:"<<profit[i];
  }

  
  
  


  return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value <<endl;
  return 0;
}
