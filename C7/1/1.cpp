// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
void main(void)
{
    int maxgy(int x,int y);
    int mingb(int x,int y);
    int a,b;
    printf("输入两个整数:\n");
    scanf("%d%d",&a,&b);
    printf("最大公约数为：%d\n",maxgy(a,b));
    printf("最小公倍数为：%d\n",mingb(a,b));
 } 
 int maxgy(int x,int y)
    {
        int z; 
        while(y!=0)
        {
            z=x%y;
            x=y;
            y=z;
        }
        return x;
    }
    int mingb(int x,int y)
    {
        int z;
        z=x*y/maxgy(x,y);
        return z;
    }
