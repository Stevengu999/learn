#include <stdio.h>
#include <stdlib.h>
#include "zhenghe.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	char choose = '\0';
	int exit;
	printf("��ӭ�����ҵĲ��ִ������ϡ�����COMET�����Һ������»�����ˣ�\n");
	see();
	
	do
	{
		system("color 00");
		scanf("%d",&choose);
		
		if( choose >= 0 && choose <= 6 ){
			printf("OK,�յ���\n");
			(pf[choose])();
			printf("��Ҫ��ʲô��\n");
			system("cls");
		}

	}while( choose );
	
	
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
}


