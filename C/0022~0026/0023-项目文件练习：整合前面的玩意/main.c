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
		scanf("%c",&choose);
		
		switch( choose ){
			case 'p':
				printf("OK,�յ���\n");
				primelist();
				printf("\n\n��Ҫ��ʲô��\n");
			break;
			
			case 'g':
				printf("OK,�յ���\n");
				guess();
				printf("\n\n��Ҫ��ʲô��\n");
			break;
			
			case 'x':
				printf("OK,�յ���\n");
				ai();
				printf("\n\n��Ҫ��ʲô��\n");
			break;
			
			case 's':
				printf("OK,�յ���\n");
				shop();
				printf("\n\n��Ҫ��ʲô��\n");
			break;
			
			case 'a':
				printf("OK,�յ���\n");
				see();
				printf("\n\n��Ҫ��ʲô��\n");
			break;
		
			case 'e':
				printf("ȷ���˳���\n");
				printf("Y:�� N:��\n");
				
				scanf("%c",&exit);
				
				if(exit == 'Y'){
					choose = '\0';
				}else{
					choose = 'a';
				}
				printf("\n\n��Ҫ��ʲô��\n");
			break;
				
			default:
			break;
		}
	}while( choose );
	
	
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
}


