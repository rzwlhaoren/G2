// flower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	long t1,t2;
	int i,j,m,n,x;
	int a[10][10];
	int sum=0,cnt=0;
	for(j=0;j<10;j++){
		for(i=3;i<10;i++){
			a[j][i]=pow(j,i);
		}
	}
	t1=clock();
	for(j=100;j<100000000;j++){
		m=j,n=j;x=j,sum=0;cnt=0;
		while(n!=0){
			n/=10;
			cnt++;
		}
		while(m!=0){
			x=m%10; 
			sum+=a[x][cnt];
			m=m/10;
		}
		if(sum==j){
			printf("%d\n",sum);
		}
	}
	t2=clock();	
	printf("ÓÃÊ±%.2fsÃë",(t2-t1)/(float)CLOCKS_PER_SEC);
	return 0;
}
