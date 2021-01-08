#include <iostream>
#include <vector>
using namespace std;

int Solve(int des,int m,int size,const vector<int>& petrols)
{
  int traveled=0;
  int numfill=0;
  int currfill=-1;
  int flag=0;
  int lastfill=0;

//cout<<"check"<<traveled+m<<" "<<"des"<<des<<"Size"<<size;
  while((traveled+m)<des)
  { 

    lastfill=currfill;
    if(flag==0)
    {
      while(currfill<size-1 &&  petrols[currfill+1]<=m )
     {
      currfill++;
      flag++;
     // cout<<"first while";
     }

    }
    else{
      while(currfill<size-1 &&  petrols[currfill+1]-petrols[lastfill]<=m )
      {
        currfill++;
        //cout<<"Second while";
      }
    }
    //cout<<"Current:"<<currfill<<"   "<<"Last:"<<lastfill<<endl;

    if(currfill==lastfill)
    {
      return -1;
      break;
    }
    if(petrols[currfill]<des)
    {
      numfill++;
      traveled=petrols[currfill];
    }

    
  }return numfill;
}


int main()
{
  int des,m,break_P;
  cin>>des>>m>>break_P;

  vector<int> petrols;
  int value;
  for(int i=0;i<break_P;i++)
  {
    cin>>value;
    petrols.push_back(value);
  }

  cout<<Solve(des,m,break_P,petrols);
}
