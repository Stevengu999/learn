#include "node.h"
#include <stdio.h>
#include <stdlib.h>

/*typedef struct{
	node* head;
	node* tail;
} list ;*/

/*typedef struct node_{
	int num;//ֵ�� 
	struct node_ *next;
} node ;*/

//void����add:���뺯���� �����޸�ָ�롣 
//void csh( list* lst) ��ʼ�������� 

int main(void){
	
	list lst;
//�������� 
	int number = 0, j;
//node *head = NULL;

	csh(&lst);

	printf("����һ����������������飬һ������һ���س���\n����-1������-1������������С�\n"); 

	do{
		printf("�����롣\n");
		scanf("%d",&number);
		if( number != -1 ){
			add( &lst, number );
		}
	}while ( number != -1 );

//��if���⽫-1���롣 

	printf("�����ѽ�����\n");

	printf("head=%d\ntail=%d\n",*(lst.head),*(lst.tail));

	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;

}

void csh( list* lst){
	lst->tail = lst->head = NULL;
}

void add( list* biao, int new_value ){

	node *h = biao->head;
	node *t = biao->tail;
//���ü򵥵���ĸ��ʾ���ǡ� 

	t = ( node* )malloc( sizeof(node) );
//����ռ� 
	t->num = new_value;
//��ֵ�� 

	if( t == NULL ){
//��һ���������
		h->num = new_value;
		h = t;
	};

	t = t->next;//��λ��
	t->next = NULL;
	
	biao->head = h;
	biao->tail = t;
//��ʾ������ 
}
/*
void add (list* pList,int number){
    node *p = (node*) malloc (sizeof(node));
    p -> num = number;
    p -> next = NULL;
    p->back = NULL;
    if (pList -> tail){
        pList->tail->next = p;
        p->back = pList->tail;
        pList->tail = p;
    } else {
        pList->tail = p ;
        pList->head = p ;
        p->back = NULL;
    }
}
*/
