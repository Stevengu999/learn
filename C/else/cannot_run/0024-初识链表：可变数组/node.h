#ifndef _NODE_H_
#define _NODE_H_

typedef struct node_{
	int num;
	struct node_ *next;
} node ;

typedef struct{
	node* head;
	node* tail;
} list ;

void csh( list* );//��ʼ�� 
void add( list* phead, int new_value );//���ӡ� 
//void add (list* pList,int number);

#endif
