#include <stdio.h>
#include <stdlib.h>

int main(void){
	void *p;
	int zijie=0;
	
	printf("��������ܻ�����ϵͳ�����������ʹ�á�\n");
	
	while ( p=malloc(1024*1024*1024) ){
		zijie++;
	}
	free(p);
	
	printf("���ܷ��� %dGB ���ڴ档����ͬ�������н����ͬ��\nO(��_��)O����~\n",zijie);
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	
	return 0;
}
