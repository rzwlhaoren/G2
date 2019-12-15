// system.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
#include<conio.h> 
#include<stdlib.h>
#include<algorithm> 
#include<vector>
using namespace std;

FILE *fp;

void danke()/*单科成绩录入*/;
void rewrite();/*重新写入文件*/
void jixushiyong();/*询问是否继续使用*/
void chengjiluru(int x,int y);/*成绩录入*/
void caidan();/*主菜单*/
void xianshi();/*显示全部成绩*/ 
void paixu();/*排序*/ 
void piliang();/*批量录入*/ 
void luru();/*录入一个新的学生*/
void chaxun();/*单人成绩查询*/
void pingjun();/*计算平均分*/


void caidan()/*主菜单*/{
	system("cls");
	printf("\t学生成绩管理系统\n");
	printf("(1)单科成绩录入\n");
	printf("(2)按学号批量成绩录入\n");
	printf("(3)录入一个新的学生\n");
	printf("(4)单人成绩查询\n");
	printf("(5)显示全班成绩\n");
	printf("(6)排序\n");
	printf("(7)计算平均分\n");
	printf("(8)退出系统\n");
	char AFK; 
	AFK=getch();
	switch(AFK)
	{
		case '1':danke();break;
		case '2':piliang();break;
		case '3':luru();break;
		case '4':chaxun();break;
		case '5':xianshi();break;
		case '6':paixu();break;
		case '7':pingjun();break;
		case '8':rewrite();break;
	}
} 

struct stu/*学生结构体*/{
	char name[10];
	double num;
	float ac[15];
};

vector<stu> s;

void rewrite()/*重新写入文件*/{
	system("cls");
	fp= fopen("D:\\student.txt ","w+");
	char ch=fgetc(fp);
	if(ch==EOF){
		fprintf(fp,"姓名"); 
		fprintf(fp,"\t学号\t");
		fprintf(fp,"\t科目一"); 
		fprintf(fp,"\t科目二");
		fprintf(fp,"\t科目三");
		fprintf(fp,"\t科目四");
		fprintf(fp,"\t科目五");
		fprintf(fp,"\t科目六");
		fprintf(fp,"\t科目七");
		fprintf(fp,"\t科目八");
		fprintf(fp,"\t科目九");
		fprintf(fp,"\t科目十");
		fprintf(fp,"\t总分\n");
	} 
	int m=s.size();
	for(int i=0;i<m;i++){
		fprintf(fp,"%s",s[i].name); 
		fprintf(fp,"\t%d\t",s[i].num);
		for(int j=1;j<=11;j++){
				fprintf(fp,"\t%.2f",s[i].ac[j]);
		}	
		fprintf(fp,"\n");
	}
	fclose(fp);	
}

bool xuehao(const stu&st1,const stu&st2)/*学号排序的sort*/{
	return st1.num>st2.num;
}

bool zongfen(const stu&st1,const stu&st2)/*总分排序的sort*/{
	return st1.ac[11]>st2.ac[11];
} 

void piliang()/*批量录入*/{
	system("cls");
	sort(s.begin(), s.end(), xuehao);
	printf("请选择要录入的科目:"); 	                    
	printf("1.科目一\n"); 
	printf("2.科目二\n");
	printf("3.科目三\n");
	printf("4.科目四\n");
	printf("5.科目五\n");
	printf("6.科目六\n");
	printf("7.科目七\n");
	printf("8.科目八\n");
	printf("9.科目九\n");
	printf("10.科目十\n");
	int k;
	scanf("%d",&k);
	int m=s.size();
	for(int i=0;i<m;i++){
		chengjiluru(i,k);
	}
	jixushiyong();
} 

void paixu()/*排序*/ {
	system("cls");
	printf("请选择按什么排序\n");
	printf("1.学号");
	printf("2.总分");
	char k;
	k=getch();
	if(k=='1'){
		sort(s.begin(),s.end(),xuehao);
	} 
	if(k=='2'){
		sort(s.begin(),s.end(),zongfen);
	}
	jixushiyong();	
}

void jixushiyong()/*询问是否继续使用*/{
	system("cls");
	printf("是否继续使用学生管理系统\n");
	printf("1.是\n");
	printf("2.否\n");
	char ppp;
	ppp=getch();
	if(ppp=='1'){
		caidan(); 
	}
	else{
		rewrite();
	}
	system("cls");
}

void xianshi()/*显示全部成绩*/ {
	system("cls");
	printf("姓名"); 
	printf("\t学号\t");
	printf("\t科目一"); 
	printf("\t科目二");
	printf("\t科目三");
	printf("\t科目四");
	printf("\t科目五");
	printf("\t科目六");
	printf("\t科目七");
	printf("\t科目八");
	printf("\t科目九");
	printf("\t科目十");
	printf("\t总分\n");
	int m=s.size();
	for(int i=0;i<m;i++){
		printf("%s\t",s[i].name); 
		printf("%d\t",s[i].num);
		for(int j=1;j<=11;j++){
				printf("\t%.2f",s[i].ac[j]);
		}	
		printf("\n");
	}
	printf("是否继续使用学生管理系统\n");
	printf("1.是\n");
	printf("2.否\n");
	char ppp;
	ppp=getch();
	if(ppp=='1'){
		caidan(); 
	}
	else{
		rewrite();
	}
	system("cls");
}

void chengjiluru(int x,int y)/*成绩录入*/{
	system("cls");
	printf("请输入成绩：");
	scanf("%ld",&s[x].ac[y]);
} 

 

void danke()/*单科成绩录入*/{
	system("cls");
	char xm[10];
	printf("请输入学生姓名："); 
	scanf("%s",xm);
	int m=s.size();
	for(int i=0;i<=m;i++){
		if(strcmp(xm,s[i].name)==0&&i<m){ 
			printf("请选择录入成绩或学号\n");
			printf("1.成绩\n");
			printf("2.学号\n");
			char k1;
			k1=getch();
			system("cls");
			if(k1=='1') {
				printf("请选择要录入的科目:"); 	                    
				printf("1.科目一\n"); 
				printf("2.科目二\n");
				printf("3.科目三\n");
				printf("4.科目四\n");
				printf("5.科目五\n");
				printf("6.科目六\n");
				printf("7.科目七\n");
				printf("8.科目八\n");
				printf("9.科目九\n");
				printf("10.科目十\n");
				int k2;
				scanf("%d",&k2);
				system("cls");
				chengjiluru(i,k2);	
			}
			if(k1=='2'){
				printf("请输入学号:");
				scanf("%d",&s[i].num);
				system("cls");	
			}
			int sum=0; 
			for(int j=1;j<11;j++){
					if(s[i].ac[j]!=-1){
						sum+=s[i].ac[j];
					}
				} 
			s[i].ac[11]=sum;	 
			break;
		}
		if(i==m){
			printf("未查询到该名学生，是否录入该学生？\n");
			printf("1.是\n");
			printf("2.否\n");
			char k3;
			k3=getch();
			system("cls");
			if("k3=='1'"){
				stu student;
				char name[10];
				double num;
				float ac[15]={0};
				printf("请输入学生姓名：");
				scanf("%s",&name);
				printf("请输入该学生学号：");
				scanf("%d",&num);
				printf("请选择要录入的科目:\n"); 	                    
				printf("1.科目一\n"); 
				printf("2.科目二\n");
				printf("3.科目三\n");
				printf("4.科目四\n");
				printf("5.科目五\n");
				printf("6.科目六\n");
				printf("7.科目七\n");
				printf("8.科目八\n");
				printf("9.科目九\n");
				printf("10.科目十\n");
				int k2;
				scanf("%d",&k2);
				system("cls");
				chengjiluru(i,k2);
				student.name[10]=xm[10];
				student.num=num;
				student.ac[1]=ac[1];
				student.ac[2]=ac[2];
				student.ac[3]=ac[3];
				student.ac[4]=ac[4];
				student.ac[5]=ac[5];
				student.ac[6]=ac[6];
				student.ac[7]=ac[7];
				student.ac[8]=ac[8];
				student.ac[9]=ac[9];
				student.ac[10]=ac[10];
				for(int j=1;j<11;j++){
					if(ac[j]!=-1){
						ac[11]+=ac[j];
					}
				} 
				student.ac[11]=ac[11]+1;
				s.push_back(student); 					 
			}
			else break;			
		}
	}
	jixushiyong();
} 

void luru()/*录入一个新的学生*/{
	stu student;
	char name[10];
	printf("请输入学生姓名：");
	scanf("%s",&name);
	double num;
	printf("请输入该学生学号：");
	scanf("%d",&num);
	student.name[10]=name[10];
	student.num=num;
	s.push_back(student); 
	jixushiyong(); 
} 

void chaxun()/*单人成绩查询*/{
	system("cls");
	char xm[10];
	printf("请输入学生姓名："); 
	scanf("%s",xm);
	int m=s.size();
	for(int i=0;i<=m;i++){
		if(strcmp(xm,s[i].name)==0&&i<m){ 
			printf("%s\t",s[i].name); 
			printf("\t%d\t",s[i].num);
			for(int j=1;j<=11;j++){
				printf("\t%d",s[i].ac[j]);
			}	
			printf("\n");
		}
		if(i==m){
			printf("未查询到该名学生\n");		
		}
	}
	printf("是否继续使用学生管理系统\n");
	printf("1.是\n");
	printf("2.否\n");
	char ppp;
	ppp=getch();
	if(ppp=='1'){
		caidan(); 
	}
	else{
		rewrite();
	}
	system("cls");
} 

void pingjun()/*计算平均分*/{
	system("cls");
	printf("请选择要录入的科目:\n"); 	                    
	printf("1.科目一\n"); 
	printf("2.科目二\n");
	printf("3.科目三\n");
	printf("4.科目四\n");
	printf("5.科目五\n");
	printf("6.科目六\n");
	printf("7.科目七\n");
	printf("8.科目八\n");
	printf("9.科目九\n");
	printf("10.科目十\n");
	printf("11.总分\n");
	int k;
	scanf("%d",&k);
	int m=s.size();
	float sum=0;
	for(int i=0;i<m;i++){
		sum+=s[i].ac[k];
	}
	float n=sum/m;
	system("cls");
	printf("平均分是：%.2f\n",n);
	printf("是否继续使用学生管理系统\n");
	printf("1.是\n");
	printf("2.否\n");
	char ppp;
	ppp=getch();
	if(ppp=='1'){
		caidan(); 
	}
	else{
		rewrite();
	}
	system("cls");
} 


int main(){	
	fp= fopen("D:\\student.txt ","a+");
	char ch=fgetc(fp);
	if(ch==EOF){
		fprintf(fp,"姓名"); 
		fprintf(fp,"\t学号\t");
		fprintf(fp,"\t科目一"); 
		fprintf(fp,"\t科目二");
		fprintf(fp,"\t科目三");
		fprintf(fp,"\t科目四");
		fprintf(fp,"\t科目五");
		fprintf(fp,"\t科目六");
		fprintf(fp,"\t科目七");
		fprintf(fp,"\t科目八");
		fprintf(fp,"\t科目九");
		fprintf(fp,"\t科目十");
		fprintf(fp,"\t总分\n");
	} 
	fclose(fp);
	fp= fopen("D:\\student.txt ","r"); 
	char  ooo[10000];
	fgets(ooo,10000,fp);
	while(1){
		stu student;
		char name[10];
		double num;
		float ac[15];
		if(fscanf(fp,"%s %d %f %f %f %f %f %f %f %f %f %f %f",&name,&num,&ac[1],&ac[2],&ac[3],&ac[4],&ac[5],&ac[6],&ac[7],&ac[8],&ac[9],&ac[10],&ac[11])==EOF){
			fclose(fp);
			break;
		}
		student.name[10]=name[10];
		student.num=num;
		student.ac[1]=ac[1];
		student.ac[2]=ac[2];
		student.ac[3]=ac[3];
		student.ac[4]=ac[4];
		student.ac[5]=ac[5];
		student.ac[6]=ac[6];
		student.ac[7]=ac[7];
		student.ac[8]=ac[8];
		student.ac[9]=ac[9];
		student.ac[10]=ac[10];
		student.ac[11]=ac[11];
		s.push_back(student); 
	} 
	caidan();
	s.clear(); 
	return 0;	
}




