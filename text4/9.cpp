#include<stdio.h>
main()
{
	int num,count,sd,td,hd,thd,ad;
	printf("����һ��������5λ����: ");
	scanf("%d",&num);
	while(num>99999)
	{
		printf("����������\n");
		scanf("%d",&num);
	}
	if(num>9999)count=5;
	else if(num>999&&num<=9999)count=4;
	else if(num>99&&num<=999)count=3;
	else if(num>9&&num<=99)count=2;
	else count=1;
	printf("����λ�� = %d\n",count);
	sd=num%10;
	td=num%100/10;
	hd=num%1000/100;
	thd=num%10000/1000;
	ad=num/10000;
	if(count==5)
	{
		printf("ÿһλ���ֱַ���: ");
		printf("%d %d %d %d %d \n",ad,thd,hd,td,sd);
		printf("�������:");
		printf("%d%d%d%d%d\n",sd,td,hd,thd,ad); 
	}
	if(count==4)
	{
		printf("ÿһλ���ֱַ���: ");
		printf("%d %d %d %d \n",thd,hd,td,sd);
		printf("�������:");
		printf("%d%d%d%d\n",sd,td,hd,thd); 
	}
	if(count==3)
	{
		printf("ÿһλ���ֱַ���: ");
		printf("%d %d %d \n",hd,td,sd);
		printf("�������:");
		printf("%d%d%d\n",sd,td,hd); 
	}
	if(count==2)
	{
		printf("ÿһλ���ֱַ���: ");
		printf("%d %d \n",td,sd);
		printf("�������:");
		printf("%d%d\n",sd,td); 
	}
	if(count==1)
	{
		printf("ÿһλ���ֱַ���: ");
		printf("%d\n",num);
		printf("�������:");
		printf("%d\n",num); 
	}
	return 0;
}
