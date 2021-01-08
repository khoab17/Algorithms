/* Dynamic Programming C/C++ implementation of LCS problem */
#include <iostream>
using namespace std;

int max(int a, int b) 
{ 
	return (a > b) ? a : b; 
} 

int lcs(int*X, int* Y, int m, int n) 
{ 
	int L[m + 1][n + 1]; 
	for (int i = 0; i <= m; i++) { 
		for (int j = 0; j <= n; j++) { 
			if (i == 0 || j == 0) 
				L[i][j] = 0; 

			else if (X[i - 1] == Y[j - 1]) 
				L[i][j] = L[i - 1][j - 1] + 1; 

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
		} 
	} 
	return L[m][n]; 
} 

int main() 
{ 
    int m,n;
    cin>>m;
    int str1[m];
    for(int i=0;i<m;i++)
    {
        cin>>str1[i];
    }
    cin>>n;
    int str2[n];
    for(int i=0;i<n;i++)
    {
		cin>>str2[i];
    }

	cout<<lcs(str1, str2, m, n); 

	return 0; 
} 
