// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<algorithm> 
#include<cstdio>      
#include<cstdlib> 
using namespace std;

int a[10];
int main()
{
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);	
	}
	sort(a,a+10);
	for(int j=0;j<10;j++){
		printf("%d	",a[j]);	
	}
	return 0;
 } 

