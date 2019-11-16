#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,pi=3.141592,C,S1,S2,V1,V2;
	printf("请输入圆半径圆柱高\n");
	scanf("%f%f",&r,&h);
	
	C=4*r*pi;
	printf("圆周长=%2.2f\n",C);
	
	S1=pi*r*r;
	printf("圆面积=%2.2f\n",S1);
	
	S2=4*pi*r*r;
	printf("圆球表面积=%2.2f\n",S2);
	
	V1=(4/3)*pi*pow(r,3);
	printf("圆球体积=%2.2f\n",V1);
	 
	V2=S1*h;
	printf("圆柱体积=%2.2f\n",V2);
	
	return 0;
	 
}
