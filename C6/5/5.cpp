// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<cstdio>
#include<algorithm> 
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
int main() 
{
	vector<int> a;
 	int number;
 	while (1) {
  		scanf("%d",&number);
  		a.push_back(number);
  		if(getchar() == '\n')
   			break;
 	}
 	int m= a.size();
 	int b[100000000000];
 	for(int i=0;i<m;i++){
 		b[i]=a[m-i-1];
 	} 
 	for(int k=0;k<m;k++){
 	a[k]=b[k];
 	} 
 	for(int j=0;j<m;j++){
 		printf("%d	",a[j]);	
	}
	return 0;
}