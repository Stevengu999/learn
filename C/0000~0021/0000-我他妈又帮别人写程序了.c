#include <stdio.h>

int main(void){
	
	int a,b;
	char d;
	
	printf("����������\n");
	
	scanf("%d%c%d",&a,&d,&b);
	switch ( d ){
		case '+':
			printf("%d+%d=%d",a,b,a+b);
		break;
		
		case '-':
			printf("%d+%d=%d",a,b,a-b);
		break;	
		
		case '*':
			printf("%d*%d=%d",a,b,a*b);
		break;
		
		case '/':
			printf("%d/%d=%d",a,b,a/b);
		break;
		
		default :
			printf("�����������\n");
		break; 
	}

	return 0;
}
