#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int real_ice_strlen ( const char *q1 );

int main(void){

	char p[]={"Hello_world"};
	
	printf("Ŀǰ�������飺\nchar p[]={\"Hello_world\"};\n�����Ǹ��������ķ���ֵ��\n���������еľ�̬������~\n");
	
	printf("sizeof(p)=%d,\n",sizeof(p));	
	printf("strlen(p)=%d,\n",strlen(p));
	printf("real_ice_strlen(p)=%d,\n",real_ice_strlen(p));
	printf("ice_strlen(p)=%d,\n",sizeof(p)-1);
	
	printf("\n���Ѿ�û�ж���д����������==\n");
	
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
}

int real_ice_strlen ( const char *q1 ){
	int idx;
	while ( q1[idx] ){
		idx++;
	}//����������ϵ��~ 
	return idx;
}
