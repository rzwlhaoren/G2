// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char a;
	int z=0,k=0,s=0,q=0;
	while((a=getchar())!='\n')
	{
	      if(a>=65&&a<=90||a>=97&&a<=122)z++;
	      else if(a==32)k++;
	      else if(a>=48&&a<=57)s++;
	      else q++;
	}
	printf("��ĸ%d��\n",z);
	printf("�ո�%d��\n",k);
	printf("����%d��\n",s);
	printf("�����ַ�%d��\n",q);
	return 0;
}

