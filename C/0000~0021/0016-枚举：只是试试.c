#include <stdio.h>
#include <stdlib.h>

enum language { C, Cpp, JAVA, Swift, JS, PHP, num, };

int main(void){
	enum language a = C, b = Cpp; 
	printf("a=(int)%d\n",a);//������Ϊ0�� 
	printf("b=(char)%c\n",b);//��������ASCII���1����Ц���� 
	
	printf("�������������ǣ�ö�ٲ�û��ʲô���á�\n");
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
}
