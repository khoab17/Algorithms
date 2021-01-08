#include<iostream>
#include<cstring>
#include<cassert>
#include<climits>

#define  ll long long
using namespace std;

ll cal( ll x,ll y,char op)
{
    if(op=='*')
    {return x*y;}
    else if (op=='+')
    {return x+y;}
    else if(op=='-')
    {return x-y;}
    else
    {
        assert(0);
    }   
}
ll min_Val(ll a,ll b){return (a<=b)?a:b;}
ll max_Val(ll a,ll b){return (a>=b)?a:b;}

ll Solve_max_value_exp(const string &str)
{
    int l=str.size();
    int n = (l + 1) / 2;
    ll minArr[n][n];
    ll maxArr[n][n];
    memset(minArr,0,sizeof(minArr)); 
    memset(maxArr,0,sizeof(maxArr));

    for (int i = 0; i < n; i++)
    {
	  minArr[i][i] = stoll(str.substr(2*i,1));
	  maxArr[i][i] = stoll(str.substr(2*i,1));
    }

    for (int l = 0; l < n - 1; l++)
    {
	  for (int i = 0; i < n - l - 1; i++)
	  {
		  int j = i + l + 1;
		  ll minVal = LLONG_MAX;
	      ll maxVal = LLONG_MIN;
		  for (int k = i; k < j; k++ )
	      {
			  ll a = cal(minArr[i][k],minArr[k + 1][j],str[2 * k + 1]);
			  ll b = cal(minArr[i][k],maxArr[k + 1][j],str[2 * k + 1]);
			  ll c = cal(maxArr[i][k],minArr[k + 1][j],str[2 * k + 1]);
			  ll d = cal(maxArr[i][k],maxArr[k + 1][j],str[2 * k + 1]);
			  minVal = min_Val(minVal,min_Val(a,min_Val(b,min_Val(c,d))));
			  maxVal = max_Val(maxVal,max_Val(a,max_Val(b,max_Val(c,d))));
	      }
		  minArr[i][j] = minVal;
		  maxArr[i][j] = maxVal;
	  }
    }
  return maxArr[0][n - 1];
}

int main()
{
    string str;
    cin>>str;
    cout<<Solve_max_value_exp(str);
}
