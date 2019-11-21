// 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#define M 10
char paixu(char p[]) 
{
    int a,b;
    char t;
    for (a=M-1;a>0;a--) 
    {
        for (b=0;b<a;b++)
                         if(p[b]>p[b+1]) 
        {
            t=p[b];
            p[b]=p[b+1];
            p[b+1]=t;
        }
    }
    printf("输出排序后的字符：\n");
    for (b=0;b<M;b++) 
        printf("%4c",p[b]);
return 0;
}
main() 
{
    char str[M];
    int i=0;
    printf("输入10个字符"); 
    for (;i<M;i++)
    scanf("%c",&str[i]);
    paixu(str);
}
