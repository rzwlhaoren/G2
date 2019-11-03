#include<stdio.h>
main()
{
	int num,count,sd,td,hd,thd,ad;
	printf("输入一个不多于5位的数: ");
	scanf("%d",&num);
	while(num>99999)
	{
		printf("请重新输入\n");
		scanf("%d",&num);
	}
	if(num>9999)count=5;
	else if(num>999&&num<=9999)count=4;
	else if(num>99&&num<=999)count=3;
	else if(num>9&&num<=99)count=2;
	else count=1;
	printf("该数位数 = %d\n",count);
	sd=num%10;
	td=num%100/10;
	hd=num%1000/100;
	thd=num%10000/1000;
	ad=num/10000;
	if(count==5)
	{
		printf("每一位数字分别是: ");
		printf("%d %d %d %d %d \n",ad,thd,hd,td,sd);
		printf("逆序输出:");
		printf("%d%d%d%d%d\n",sd,td,hd,thd,ad); 
	}
	if(count==4)
	{
		printf("每一位数字分别是: ");
		printf("%d %d %d %d \n",thd,hd,td,sd);
		printf("逆序输出:");
		printf("%d%d%d%d\n",sd,td,hd,thd); 
	}
	if(count==3)
	{
		printf("每一位数字分别是: ");
		printf("%d %d %d \n",hd,td,sd);
		printf("逆序输出:");
		printf("%d%d%d\n",sd,td,hd); 
	}
	if(count==2)
	{
		printf("每一位数字分别是: ");
		printf("%d %d \n",td,sd);
		printf("逆序输出:");
		printf("%d%d\n",sd,td); 
	}
	if(count==1)
	{
		printf("每一位数字分别是: ");
		printf("%d\n",num);
		printf("逆序输出:");
		printf("%d\n",num); 
	}
	return 0;
}
