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

void danke()/*���Ƴɼ�¼��*/;
void rewrite();/*����д���ļ�*/
void jixushiyong();/*ѯ���Ƿ����ʹ��*/
void chengjiluru(int x,int y);/*�ɼ�¼��*/
void caidan();/*���˵�*/
void xianshi();/*��ʾȫ���ɼ�*/ 
void paixu();/*����*/ 
void piliang();/*����¼��*/ 
void luru();/*¼��һ���µ�ѧ��*/
void chaxun();/*���˳ɼ���ѯ*/
void pingjun();/*����ƽ����*/


void caidan()/*���˵�*/{
	system("cls");
	printf("\tѧ���ɼ�����ϵͳ\n");
	printf("(1)���Ƴɼ�¼��\n");
	printf("(2)��ѧ�������ɼ�¼��\n");
	printf("(3)¼��һ���µ�ѧ��\n");
	printf("(4)���˳ɼ���ѯ\n");
	printf("(5)��ʾȫ��ɼ�\n");
	printf("(6)����\n");
	printf("(7)����ƽ����\n");
	printf("(8)�˳�ϵͳ\n");
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

struct stu/*ѧ���ṹ��*/{
	char name[10];
	double num;
	float ac[15];
};

vector<stu> s;

void rewrite()/*����д���ļ�*/{
	system("cls");
	fp= fopen("D:\\student.txt ","w+");
	char ch=fgetc(fp);
	if(ch==EOF){
		fprintf(fp,"����"); 
		fprintf(fp,"\tѧ��\t");
		fprintf(fp,"\t��Ŀһ"); 
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀʮ");
		fprintf(fp,"\t�ܷ�\n");
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

bool xuehao(const stu&st1,const stu&st2)/*ѧ�������sort*/{
	return st1.num>st2.num;
}

bool zongfen(const stu&st1,const stu&st2)/*�ܷ������sort*/{
	return st1.ac[11]>st2.ac[11];
} 

void piliang()/*����¼��*/{
	system("cls");
	sort(s.begin(), s.end(), xuehao);
	printf("��ѡ��Ҫ¼��Ŀ�Ŀ:"); 	                    
	printf("1.��Ŀһ\n"); 
	printf("2.��Ŀ��\n");
	printf("3.��Ŀ��\n");
	printf("4.��Ŀ��\n");
	printf("5.��Ŀ��\n");
	printf("6.��Ŀ��\n");
	printf("7.��Ŀ��\n");
	printf("8.��Ŀ��\n");
	printf("9.��Ŀ��\n");
	printf("10.��Ŀʮ\n");
	int k;
	scanf("%d",&k);
	int m=s.size();
	for(int i=0;i<m;i++){
		chengjiluru(i,k);
	}
	jixushiyong();
} 

void paixu()/*����*/ {
	system("cls");
	printf("��ѡ��ʲô����\n");
	printf("1.ѧ��");
	printf("2.�ܷ�");
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

void jixushiyong()/*ѯ���Ƿ����ʹ��*/{
	system("cls");
	printf("�Ƿ����ʹ��ѧ������ϵͳ\n");
	printf("1.��\n");
	printf("2.��\n");
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

void xianshi()/*��ʾȫ���ɼ�*/ {
	system("cls");
	printf("����"); 
	printf("\tѧ��\t");
	printf("\t��Ŀһ"); 
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀ��");
	printf("\t��Ŀʮ");
	printf("\t�ܷ�\n");
	int m=s.size();
	for(int i=0;i<m;i++){
		printf("%s\t",s[i].name); 
		printf("%d\t",s[i].num);
		for(int j=1;j<=11;j++){
				printf("\t%.2f",s[i].ac[j]);
		}	
		printf("\n");
	}
	printf("�Ƿ����ʹ��ѧ������ϵͳ\n");
	printf("1.��\n");
	printf("2.��\n");
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

void chengjiluru(int x,int y)/*�ɼ�¼��*/{
	system("cls");
	printf("������ɼ���");
	scanf("%ld",&s[x].ac[y]);
} 

 

void danke()/*���Ƴɼ�¼��*/{
	system("cls");
	char xm[10];
	printf("������ѧ��������"); 
	scanf("%s",xm);
	int m=s.size();
	for(int i=0;i<=m;i++){
		if(strcmp(xm,s[i].name)==0&&i<m){ 
			printf("��ѡ��¼��ɼ���ѧ��\n");
			printf("1.�ɼ�\n");
			printf("2.ѧ��\n");
			char k1;
			k1=getch();
			system("cls");
			if(k1=='1') {
				printf("��ѡ��Ҫ¼��Ŀ�Ŀ:"); 	                    
				printf("1.��Ŀһ\n"); 
				printf("2.��Ŀ��\n");
				printf("3.��Ŀ��\n");
				printf("4.��Ŀ��\n");
				printf("5.��Ŀ��\n");
				printf("6.��Ŀ��\n");
				printf("7.��Ŀ��\n");
				printf("8.��Ŀ��\n");
				printf("9.��Ŀ��\n");
				printf("10.��Ŀʮ\n");
				int k2;
				scanf("%d",&k2);
				system("cls");
				chengjiluru(i,k2);	
			}
			if(k1=='2'){
				printf("������ѧ��:");
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
			printf("δ��ѯ������ѧ�����Ƿ�¼���ѧ����\n");
			printf("1.��\n");
			printf("2.��\n");
			char k3;
			k3=getch();
			system("cls");
			if("k3=='1'"){
				stu student;
				char name[10];
				double num;
				float ac[15]={0};
				printf("������ѧ��������");
				scanf("%s",&name);
				printf("�������ѧ��ѧ�ţ�");
				scanf("%d",&num);
				printf("��ѡ��Ҫ¼��Ŀ�Ŀ:\n"); 	                    
				printf("1.��Ŀһ\n"); 
				printf("2.��Ŀ��\n");
				printf("3.��Ŀ��\n");
				printf("4.��Ŀ��\n");
				printf("5.��Ŀ��\n");
				printf("6.��Ŀ��\n");
				printf("7.��Ŀ��\n");
				printf("8.��Ŀ��\n");
				printf("9.��Ŀ��\n");
				printf("10.��Ŀʮ\n");
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

void luru()/*¼��һ���µ�ѧ��*/{
	stu student;
	char name[10];
	printf("������ѧ��������");
	scanf("%s",&name);
	double num;
	printf("�������ѧ��ѧ�ţ�");
	scanf("%d",&num);
	student.name[10]=name[10];
	student.num=num;
	s.push_back(student); 
	jixushiyong(); 
} 

void chaxun()/*���˳ɼ���ѯ*/{
	system("cls");
	char xm[10];
	printf("������ѧ��������"); 
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
			printf("δ��ѯ������ѧ��\n");		
		}
	}
	printf("�Ƿ����ʹ��ѧ������ϵͳ\n");
	printf("1.��\n");
	printf("2.��\n");
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

void pingjun()/*����ƽ����*/{
	system("cls");
	printf("��ѡ��Ҫ¼��Ŀ�Ŀ:\n"); 	                    
	printf("1.��Ŀһ\n"); 
	printf("2.��Ŀ��\n");
	printf("3.��Ŀ��\n");
	printf("4.��Ŀ��\n");
	printf("5.��Ŀ��\n");
	printf("6.��Ŀ��\n");
	printf("7.��Ŀ��\n");
	printf("8.��Ŀ��\n");
	printf("9.��Ŀ��\n");
	printf("10.��Ŀʮ\n");
	printf("11.�ܷ�\n");
	int k;
	scanf("%d",&k);
	int m=s.size();
	float sum=0;
	for(int i=0;i<m;i++){
		sum+=s[i].ac[k];
	}
	float n=sum/m;
	system("cls");
	printf("ƽ�����ǣ�%.2f\n",n);
	printf("�Ƿ����ʹ��ѧ������ϵͳ\n");
	printf("1.��\n");
	printf("2.��\n");
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
		fprintf(fp,"����"); 
		fprintf(fp,"\tѧ��\t");
		fprintf(fp,"\t��Ŀһ"); 
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀ��");
		fprintf(fp,"\t��Ŀʮ");
		fprintf(fp,"\t�ܷ�\n");
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




