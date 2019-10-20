#include<stdio.h>
#include<math.h> 
int main()
{
	float d=300000,p=6000;
	double r=0.01,m,x,y;
    x=p/(p-d*r);
    y=1+r;
	m=log10(x)/log10(y); 
	printf("m=%.2lf\n",m);
	return 0;
}
