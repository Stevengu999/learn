//#include "array.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int *ary;
	int size;
} ary ;

ary ary_crt( int in_size ){
	ary a;

	a.size = in_size;
	a.ary = (int*)malloc( in_size * sizeof(int) );

	return a;
}//����һ�����顣���Ǳ��ر������á�


void ary_fre( ary *a ){
	free(a->ary);
	a->ary = NULL;
	a->size = 0;
}//�ͷţ� 


int ary_size( const ary *a ){

	return a->size;
}//��װ 


void ary_flt( ary *a, int mrsz ){
	int *p = (int*)malloc( sizeof(int) * ( a->size + mrsz ) );
	//��������һ������� 
	int i;
	for( i=0; i<a->size; i++ ){
		p[i] = a->ary[i];
	}//���¸�ֵ���� 

	free(a->ary);//�ͷ�ԭ���ġ� 

	a->ary = p;
	a->size += mrsz;
}//�Զ�������


int* ary_at( ary *p, int index ){
	while( index > p->size ){
		ary_flt( p, 50 );//������ һ��50���� 
		p->size = index +1; 
	}

	return &(p->ary[index]);
}//����ֵ����ֱ�Ӹ�ֵ,�൱�� 


int main(void){
	printf("�ɱ���������������������壬���Ǵ���ܸ߼���\n");
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
}
