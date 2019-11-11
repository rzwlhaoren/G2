// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
    int x,y,m,n,u,p;
    scanf("%d%d",&x,&y);
    m=x;
    n=y;
    while(y!=0)
    {
    	u=x%y;
    	x=y;
    	y=u;
    }
    p=m*n/x;
    printf("最大公约数=%d\n",x);     
    printf("最小公倍数=%d\n",p);
    return 0;
}

