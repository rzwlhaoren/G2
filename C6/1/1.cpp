// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


	#include<stdio.h>
int main()
{
	int n,i,k,num;
	int a[78498];
	a[1]=2;
	i=2;
	scanf("%lld",&n);
	for(num=2;num<=n;num++)
	{
		if(num==2)
		goto loop22; 
		for(k=1;k<i;k++)
		{
			if(num%a[k]==0)
			goto loop23;
			else
			continue;
		}
		a[i]=num;
		i++;
		loop22:printf("%d	",num);
        loop23:continue;
	}
	printf("\n");
	return 0;
}

