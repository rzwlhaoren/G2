// 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
char copy(char c[],char d[])
{
    int i,j=0;
    for (i=0;c[i]!='\0';i++)
        if(c[i]==97||c[i]==101||c[i]==105||
        c[i]==111||c[i]==117||c[i]==65||
        c[i]==69||c[i]==73||c[i]==85) 
    {
        d[j]=c[i];
        j++;
    }
return 0;
}
main() 
{
    char a[10],b[10];
    printf("输入一个字符串：\n");
    gets(a);
    copy(a,b);
    printf("输出元音字母的字符串：\n");
    puts(b);
}
