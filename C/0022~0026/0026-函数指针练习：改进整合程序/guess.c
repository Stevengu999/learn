#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(void){
	
	srand(time(0));
	int a=rand(),x,n=1;
	a %= 100; 
	printf("������Ϸ��\n���һ��1��100������~~~\n");
	scanf("%d",&x);
	
	while (x != a) {
		if (x > a) {
			printf ("���µ��� �� �ˡ�\n"); 
		} else {
			printf ("���µ��� С �ˡ�\n");
		}
		n++;
		scanf ("%d",&x);
	}
	printf ("��ϲ������ˣ���һ������%d�ξͲµ�����ȷ�𰸣�^_^\n��ܰ��ʾ��\n����Ϸ������಻���� 7 ����\n",n);
	
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
} 
