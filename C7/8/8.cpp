// 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
void f(int n)
{
    int a,b,c,d;
    a=n/1000;//ǧλ 
    b=(n-a*1000)/100;//��λ 
    c=(n-a*1000-b*100)/10;//ʮλ 
    d=n-a*1000-b*100-c*10;//��λ
    printf("���4λ�������ַ���\n");
    printf("%d %d %d %d\n",a,b,c,d); 
}
main()
{
    int n;
    printf("����һ��4λ���֣�\n");
    scanf("%d",&n);
    f(n);
}
