#include"stdafx.h"
int main()
{
    int year,month,day;
	int judge,i;
	int sum=0;
	int date[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}};
		printf("����������");
		scanf("%d %d %d",&year,&month,&day);
		judge=(year%4==0)||(year%400==0 && year%100!=0);
		for(i=0;i<month-1;i++)
			sum+=date[judge][i];
		sum+=day;
		printf("����%d���еĵ�%d��\n",year,sum);

	return 0;
}