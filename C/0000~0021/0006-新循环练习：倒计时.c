#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int count=30;
	
	printf("�������30�뵹��ʱ��\n");
	system("pause");
	
	do {
		printf("%d\n",count--);
		sleep(1);//�ߵ����~ 
	} while (count>0); 

	
	while (count<10) {
		count++;
	    printf("����!!!\n  hiahia\n");
    }	
	
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
 } 
