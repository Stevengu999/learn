#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b;
	int *p;//�������������á� 
	
	printf("��Ҫ������ٸ��ַ��أ�\n"); 
	printf("ÿ����һ���ַ�Ҫ�س�һ��Ŷ~\n");
	scanf("%d",&a);
	printf("�õģ��뿪ʼ���������ַ�~\nǧ��Ҫ����Ŷ~\n��Ȼ�һ������~\n");
	
	p=(int*)malloc((a)*sizeof(int));//�൱��������һ���ɱ����顣 
	
	for ( b=0; b<a; b++ ){
		scanf("%d",&p[b]);
	}
	
	for ( b=--a; b>=0; b--){
		printf("%d",p[b]);
	}
	
	free(p);
} 
