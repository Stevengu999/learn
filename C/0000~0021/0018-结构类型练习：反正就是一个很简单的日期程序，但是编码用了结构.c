#include <stdio.h>
#include <stdlib.h>

struct date {

	int year;
	int month;
	int day;

};

int main(int argc, const char *argv[]){
	struct date thisday;
	struct date today;
	
	thisday = (struct date){2015,6,9};
	
	printf("��ӭʹ�ñ����ڳ�����������������\n��ʽ����-��-�� Ȼ��س�\n");
	scanf("%d-%d-%d",&today.year,&today.month,&today.day);
	
	printf("\n�����������%d-%d-%d\n",thisday.year,thisday.month,thisday.day);
	
	if ( today.year%4 == 0 && today.year%400 != 0 ){
		printf("��Ŷ�����껹��������~");
	} else {
		printf("�����2�·�ֻ��28��ɡ����������ꡣ����"); 
	}
	printf("\n");
	printf("ʱ��%d��֮�ã��������Ȼ�ֱ��ھ����\n��Ϊ����Ա�ı�����˷ܰ�~~\n",today.year-thisday.year);
	printf("˵ʵ�������õ����ṹ���������ʱ������֪����дЩ�����ĳ���\n");
	printf("�����أ�������һ��~\n");
	
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
 }
