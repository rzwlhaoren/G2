#include<stdio.h>
#include<math.h>
int main()
{
	float r5,r3,r2,r1,r0,p1,p2,p3,p4,p5,p;
	p=1000;
	r0=0.0035;
	r1=0.015;
	r2=0.021;
	r3=0.0275;
	r5=0.03;
	
	p1=p*(1+5*r5);
	p2=p*(1+2*r2)*(1+3*r3);
	p3=p*(1+3*r3)*(1+2*r2);
	p4=p*pow(1+r1,5);
	p5=p*pow(1+r0/4,4*5);
	printf("p1=%f\n",p1);
	printf("p2=%f\n",p2);
	printf("p3=%f\n",p3);
	printf("p4=%f\n",p4);
	printf("p5=%f\n",p5);
	return 0;
 } 
