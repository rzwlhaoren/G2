#include<stdio.h>;
int main()
{
	char c1,c2;
	printf("�����������ַ�c1,c2:");
	c1=getchar();
	c2=getchar();
	printf("��putchar������Ϊ��");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("��printf������Ϊ��");
	printf("%c %c\n",c1,c2);
	/*printf("%d,%d\n",c1,c2);*/
	return 0;
	
 } 
 
 
 
 
//��1��c1��c2���Զ���Ϊ�ַ��ͻ����ͣ����߽Կɡ�

//��2����printf���������ʹ��%d��ʽ��������

//printf(��%d,%d\n��, c1, c2);

//���Ϊ��97,98

//��3���ַ�����ռ1���ֽڣ����ͱ���ռ2��4���ֽڡ������ͱ����ڿ�����ַ��ķ�Χ�ڣ�ASCII��Ϊ0��127֮����ַ����ǿ������ַ������ݻ���ת���ġ���������ڴ˷�Χ�⣬���ܴ��档

