// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<cstdio>

int main()
{
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\\之和为：%d\n",a[0][0]+a[1][1]+a[2][2]);
	printf("/之和为：%d\n",a[0][2]+a[1][1]+a[2][0]);
	return 0;
}
