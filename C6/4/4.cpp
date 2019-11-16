// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<cstdio>
#include<algorithm> 
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
int main() {
 vector<int> array;
 int number;
 while (1) {
  scanf("%d",&number);
  array.push_back(number);
  if (getchar() == '\n')
   break;
 }
	int b;
	int m= array.size();
	scanf("%d",&b);
	for(int i=0;i<m;i++){
		if(b<array[i]){
			for(int j=m;j!=i;j--){
				array[j]=array[j-1]; 
			}
			array[i]=b;
			break;
		}
	}
	for(int k=0;k<m+1;k++){
		printf("%d	",array[k]);
	}
	return 0;
}