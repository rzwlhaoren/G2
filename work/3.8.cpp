#include<stdio.h>;
int main()
{
	char c1,c2;
	printf("请输入两个字符c1,c2:");
	c1=getchar();
	c2=getchar();
	printf("用putchar输出结果为：");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("用printf输出结果为：");
	printf("%c %c\n",c1,c2);
	/*printf("%d,%d\n",c1,c2);*/
	return 0;
	
 } 
 
 
 
 
//（1）c1和c2可以定义为字符型或整型，二者皆可。

//（2）用printf函数输出，使用%d格式符，即：

//printf(“%d,%d\n”, c1, c2);

//结果为：97,98

//（3）字符变量占1个字节，整型变量占2或4个字节。故整型变量在可输出字符的范围内（ASCII码为0到127之间的字符）是可以与字符型数据互相转换的。如果整数在此范围外，不能代替。

