#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int *ary;
	int size;
} ary ;

ary ary_crt( int in_size );//���� 
void ary_dlt( ary *a );//ɾ�� 
int ary_size( const ary *a );//�鿴��С 
int* ary_at( ary *p, int index );//���������е����⡣��ȫ�档 
void ary_flt( ary *a, int mrsz );//�ɳ��� 

#endif
