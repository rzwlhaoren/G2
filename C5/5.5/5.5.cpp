// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
    int a,n,sum=0,i,t=0;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
		t=a+t*10;
		sum+=t;
    }
    printf("%d\n",sum);
	return 0;
}

