#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,pi=3.141592,C,S1,S2,V1,V2;
	printf("������Բ�뾶Բ����\n");
	scanf("%f%f",&r,&h);
	
	C=4*r*pi;
	printf("Բ�ܳ�=%2.2f\n",C);
	
	S1=pi*r*r;
	printf("Բ���=%2.2f\n",S1);
	
	S2=4*pi*r*r;
	printf("Բ������=%2.2f\n",S2);
	
	V1=(4/3)*pi*pow(r,3);
	printf("Բ�����=%2.2f\n",V1);
	 
	V2=S1*h;
	printf("Բ�����=%2.2f\n",V2);
	
	return 0;
	 
}
