#include <stdio.h>
#include <stdlib.h>

void answer( int n , char x, char y, char z ){

	if ( n == 1 ){
		printf("a->c;"); 
	}
	else{
		answer((n-1),x,z,y);
		printf("%c->%c;",x,z);
		answer((n-1),y,x,z);
	}
}//�ݹ麯�� 

int main(void){
	int a;
	
	printf("��ӭ�����ҵĳ���\n��������������һ����ŵ������Ľ⡣\n����ʲô�Ǻ�ŵ�����⣬�����аٶȡ�\n����������Բ�̵�������\n��ע����ʼԲ����A��Ŀ����C��ý����B��\n");
	scanf("%d",&a);
	printf("\n");
	
	answer(a,'a','b','c');
	
	printf("\nthanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
}

