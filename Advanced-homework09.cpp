#include<stdio.h>
#include<stdlib.h>

void is_fortunate(int,int,int);

int main(void){
	int born_year,born_month,born_day; 
	
	printf("�п�J�X�ͤ��:");
	scanf("%d%d%d",&born_year,&born_month,&born_day);
	
	is_fortunate(born_year,born_month,born_day);
	
	return 0;
	system("pause");
}
void is_fortunate(int year,int month,int day){
	int result;
	
	result=(month*2+day)%3;
	
	switch(result){
		
		case 0:
			printf("���q");
			break;
		case 1:
			printf("�N");
			break;
		case 2:
			printf("�j�N");
			break;
			
	}
}
