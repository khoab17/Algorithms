#include <iostream>
#include<cstring>
using namespace std; 

int editDistance(string str1, string str2) 
{ 
	int len1 = str1.length(); 
	int len2 = str2.length(); 

	int ed[2][len1 + 1]; 
	memset(ed,0,sizeof ed); 

	for (int i = 0; i <= len1; i++) 
	{
         ed[0][i] = i; 
    }

	for (int i = 1; i <= len2; i++) { 
		for (int j = 0; j <= len1; j++) { 
			if (j == 0) 
				ed[i % 2][j] = i; 

			else if (str1[j-1]==str2[i-1]) { 
				ed[i%2][j] = ed[(i-1) % 2][j-1]; 
			} 
			else { 
				ed[i % 2][j] = 1 + min(ed[(i-1) % 2][j], 
									min(ed[i % 2][j - 1], 
										ed[(i - 1) % 2][j - 1])); 
			} 
		} 
	} 
    return ed[len2%2][len1];
} 

int main() 
{ 
	string str1; 
	string str2; 
    cin>>str1;
    cin>>str2;
	cout<<editDistance(str1, str2); 
	return 0; 
} 
