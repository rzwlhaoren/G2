<<<<<<< HEAD
=======
<<<<<<< HEAD
#include<stdio.h>
main()
{
	int grade;
	printf("输入成绩:\n");
	scanf("%d",&grade);
	while(grade<0||grade>100)
	{
	    printf("请重新输入\n");
 	    scanf("%d",&grade);
	}
	if(grade>=90)printf("该同学成绩为 A\n");
	else if(grade>=80&&grade<90)printf("该同学成绩为 B\n");
	else if(grade>=70&&grade<80)printf("该同学成绩为 C\n");
	else if(grade>=60&&grade<70)printf("该同学成绩为 D\n");
	else printf("该同学成绩为 E\n");
	return 0;
}
=======
>>>>>>> newbranch
#include<stdio.h>
main()
{
	int grade;
	printf("输入成绩:\n");
	scanf("%d",&grade);
	while(grade<0||grade>100)
	{
	    printf("请重新输入\n");
 	    scanf("%d",&grade);
	}
	if(grade>=90)printf("该同学成绩为 A\n");
	else if(grade>=80&&grade<90)printf("该同学成绩为 B\n");
	else if(grade>=70&&grade<80)printf("该同学成绩为 C\n");
	else if(grade>=60&&grade<70)printf("该同学成绩为 D\n");
	else printf("该同学成绩为 E\n");
	return 0;
}
<<<<<<< HEAD
=======
>>>>>>> 123
>>>>>>> newbranch
