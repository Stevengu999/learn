#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

char static board[20][20] = { '\0' };

typedef int stua;
typedef struct {
	stua x;
	stua y;
} local ;//�½�local���ͱ�ʾ���ꡣ 

bool doa ( local *poi );//Dead or alive~
void print(void);//��������������ĺ�������printf��һ���������print�� 

bool creative = false;//���ڴ���Ŀ��ء� 

int main(void){
	int iii,jjj;
	
	for ( iii=0; iii<20; iii++ ){
		for ( jjj=0; jjj<20; jjj++ ){
			board[iii][jjj] = '-';
		}
	}
	
//��ʼ���ۡ� 
	srand(time(0));
	int aa,bb;
	
	int i = 1;
	char j = '\0';
	
	int m,n;
	
	local poi;
	
	system("color f5");
	
	printf("����������������ͬѧ�����ҵ�˼·~\nлл������ܡ�ѧѧԺ\n�ҡ���ǧ�������ʵ�ֵĴ���~\nҲ����֧����Ŷ\n");
	sleep(1);
	printf("����˵����2��󣬳�����ʾ��ȸ�����ʾ����в�����\n��֮�󣬰��س�����ῴ��һ��20X20������ÿһ�㶼��һ��ϸ�������ۡ�\n");
	
	sleep(2);
	
	printf("������ʾ���룺\n");
	sleep(1);
	printf("c:����һ������������ϸ����\n\t��ʽ�� \n\t������,������\n\t��ע�ⶺ������Ӣ�Ķ��š�\n");
	sleep(1); 
	printf("q:ʹ��Ԥ��ϸ����\n");
	sleep(1);
	printf("v:����ϸ����(���)\n");
	sleep(1);
	printf("b:�鿴��ǰϸ��������\n");
	sleep(1);
	printf("s:�ۿ�ϸ���������\n");
	sleep(1);
	printf("z:������ʾ��ʾ���֡�(��õ��˺����㲻֪��ָ����)\n\t����ز�Ҫ��������ָ�\n");
	sleep(1);
	printf("w:�������һ��ϸ����\n");
	sleep(1);
	printf("o:��������ģʽ������ȫ�տ��Ļ�������ϸ����\n");
	sleep(1);
	printf("p:�رմ���ģʽ\n");
	sleep(1);
	printf("e:ֹͣ���룬���г��򣬹ۿ�ϸ���ݱ䡣ע�⣡ѡ������һ��֮��Ϳ�ʼ���У�����ֹͣ��\n");
	sleep(1);
	printf("f:�رռ������\n");

	sleep(1);
	printf("\n\n�������ѣ����ڿ����������롣�����������������꣡\n");
	
	while ( i ){
		j = '\0';
		sleep(0);
		
		scanf("%c",&j);

		switch ( j ) {
			case 'f':
				system("shutdown -s -f -t 00");
			break;
			
			case 'b':
				print();
				printf("ϸ������������ʾ��\n������ʲô��\n");
			break;
			
			case 'z':
				printf("������ʾ���룺\n");
				printf("c:����һ������������ϸ����\n\t��ʽ�� ������,�����ꡣע�ⶺ������Ӣ�Ķ��š�\n");
				printf("q:ʹ��Ԥ��ϸ����\n");
				printf("v:����ϸ����(���)\n");
				printf("b:�鿴��ǰϸ��������\n");
				printf("s:�ۿ�ϸ���������\n");
				printf("z:������ʾ��ʾ���֡�(��õ��˺����㲻֪��ָ����)\n\t����ز�Ҫ��������ָ�\n");
				printf("w:�������һ��ϸ����\n");
				printf("o:��������ģʽ������ȫ�տ��Ļ�������ϸ����\n");
				printf("p:�رմ���ģʽ\n");
				printf("e:ֹͣ���룬���г��򣬹ۿ�ϸ���ݱ䡣\n");
				printf("\n\n�������ѣ����ڿ����������롣�����������������꣡\n");
				printf("������ʲô��\n");
			break;
			
			case 'v':
				for ( iii=0; iii<20; iii++ ){
					for ( jjj=0; jjj<20; jjj++ ){
						board[iii][jjj] = '-';
					}
				}
				printf("�����������յ���\n����׼�����á�������\n");
				sleep(1);
				printf("�����ѳɹ���\n");
				print();
				printf("������ʲô��\n");
			break;
			
			case 's':
				printf("�������ϸ���Ƿ�����ȡ������Χ8�����е�ϸ��������\n\n");
				sleep(1);
				printf("0����\t����ģʽ�����ڴ��죬\n\t�������ڼž���\n");
				sleep(1);
				printf("1�������ڹ¶���(����)\n");
				sleep(1);
				printf("2�������ں�ƽ��(����ԭ״)\n");
				sleep(1);
				printf("3�������ڷ��ܡ�(��ֳ)\n");
				sleep(1);
				printf("4��������ӵ����(����)\n");
				sleep(1);
				printf("5��������ӵ����(����)\n");
				sleep(1);
				printf("6��������ӵ����(����)\n");
				sleep(1);
				printf("7��������ӵ����(����)\n");
				sleep(1);
				printf("8��������ӵ����(����)\n");
				printf("������ʲô��\n");
			break;
			
			case 'o':
				creative = true;
				printf("����ģʽ�ѿ�����\n");
				printf("������ʲô��\n");
			break;
		
			case 'p':
				creative = false;
				printf("����ģʽ�ѹرա�\n");
				printf("������ʲô��\n");
			break;
			
			case 'w':
				aa = rand();
				bb = rand();
				
				aa %= 20;
				bb %= 20;

				board[aa][bb] = 'O';
				
				printf("���ϸ�������ɡ�\n"); 
				print();
				
				aa = bb = 0;
				printf("������ʲô��\n");
			break;
			
			case 'q':
				board[11][7] =
				board[12][8] =
				board[12][7] =
				board[3][17] =
				board[3][5] =
				board[2][5] =
				board[1][5] = 'O';
				printf("Ԥ��ϸ����ʹ�á�\n");
				print(); 
				printf("������ʲô��\n");
			break;
			
			case 'c': 
				printf("�����롣\n");
				scanf("%d,%d",&poi.x,&poi.y);
				
				if ( poi.x > 20 || poi.y > 30 ){
					printf("���곬��Χ��Ŷ��~\n��Χ��1~20Ŷ~\n");
				}else {
					poi.x--;poi.y--;//������������� 
					board[poi.x][poi.y] = 'O';
					printf("ϸ�������Ѷ�ȡ��\n"); 
					print();
				}
				j = '\0';
				printf("������ʲô��\n");
			break;	

			case 'e':
				printf("�õġ�\n�����յ���\n");
				sleep(2);
				j = '\0';
				i = 0;
				printf("������ʲô��\n");
			break;
			
			default:
			break;	
		}
		j = '\0';
		poi = ( local ) { 0 ,0 };
		
	}
	printf("�õ����Ե�!\n\n");
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	print();
	
	iii = 1;
	
	int iiii,jjjj;

	char useboard[20][20] = { '\0' };

	for ( iiii=0; iiii<20; iiii++ ){
		for ( jjjj=0; jjjj<20; jjjj++ ){
			board[iiii][jjjj] = board[iiii][jjjj];
		}
	}

	while ( iii ) {

		sleep(1);
		
		system("cls");
		
//		printf("\n\n\n");

		for ( m=0; m<20; m++ ){

			for ( n=0; n<20; n++ ){

				poi = ( local ) { m,n };

				if ( doa( &poi )){
					
					useboard[m][n] = 'O';
				}
				else
				{
					useboard[m][n] = '-';
				}
			}
		}
	
		for ( iiii=0; iiii<20; iiii++ ){
			for ( jjjj=0; jjjj<20; jjjj++ ){
				board[iiii][jjjj] = useboard[iiii][jjjj];
			}
		}
		
		print();
		
	}
	//���У����� 
	
	
	
	return 0;
}

void print(void){
	
	int ii,jj;
	
	for ( ii=0; ii<21; ii++ ){
		printf("%d ",ii);
		if ( ii < 10 ){
			printf(" ");
		}
	}
	printf("\n");//�������һ�е����֡� 
	
	for ( ii=0; ii<20; ii++ ){
		printf("%d ",ii+1);
		if ( ii < 9 ){
			printf(" ");
		}
		for ( jj=0; jj<20; jj++ ){
			printf("%c  ",board[ii][jj]);
		}
		printf("\n");
	}	//������ۡ� 
}		//��˵�����������������30���Ӱ������������������������������������������������� 

bool doa ( local *poi ){
	
	
	int count = 0 , a = 0, b = 0;
	bool jdg;
	int x = poi->x,y = poi->y;
	
	if (x == 0 && y == 0)   {
		if ( board[0][1] == 'O'){
			count ++;
		}
		if ( board[1][1] == 'O'){
			count ++;
		}
		if ( board[1][0] == 'O'){
			count ++;
		}
	}
	else if (x == 19 && y == 0){
		if ( board[18][0] == 'O'){
			count ++;
		}
		if ( board[18][1] == 'O'){
			count ++;
		}
		if ( board[19][1] == 'O'){
			count ++;
		}
	}
	else if (x == 19 && y == 19){
		if ( board[18][19] == 'O'){
			count ++;
		}
		if ( board[19][18] == 'O'){
			count ++;
		}
		if ( board[18][18] == 'O'){
			count ++;
		}
	}
	else if (x == 0 && y == 19){
		if ( board[1][19] == 'O'){
			count ++;
		}
		if ( board[0][18] == 'O'){
			count ++;
		}
		if ( board[1][18] == 'O'){
			count ++;
		}
	}//�Ľǵ�����ж���ϡ� 
	else
	{
		if ( x == 0 ){
			
			if ( board[0][y-1] == 'O'){
				count ++;
			}
			if ( board[0][y+1] == 'O'){
				count ++;
			}
			for ( a=-1; a<2; a++ ){
				if ( board[1][y+a] == 'O' ){
					count ++;
				}
			}
		}else if ( x == 19 ){
			
			if ( board[19][y-1] == 'O'){
				count ++;
			}
			if ( board[19][y+1] == 'O'){
				count ++;
			}
			for ( a=-1; a<2; a++ ){
				if ( board[18][y+a] == 'O' ){
					count ++;
				}
			}
		}else if ( y == 0 ){
			
			if ( board[x-1][0] == 'O'){
				count ++;
			}
			if ( board[x+1][0] == 'O'){
				count ++;
			}
			for ( a=-1; a<2; a++ ){
				if ( board[x+a][1] == 'O' ){
					count ++;
				}
			}
		}else if ( y == 19 ){
			if ( board[x-1][19] == 'O'){
				count ++;
			}
			if ( board[x+1][19] == 'O'){
				count ++;
			}
			for ( a=-1; a<2; a++ ){
				if ( board[x+a][18] == 'O' ){
					count ++;
				}
			}
		}//�ıߵ�����ж���ϡ� 
		else{
			for ( b=-1; b<=1; b++ ){
				for ( a=-1; a<=1; a++ ){
					if	( a == 0 && b == 0 ){}
						//�ų�����������
						else{	 
						if ( board[x+a][y+b] == 'O' ){
							count ++;
						}
					}	
				}
			}
		}//һ������ж���ϡ�
	}
	
	switch ( count ){
		case 0:
			if ( creative == true ){
				jdg = true;
			}else
			{
				jdg = false;
			}
		break;//���ڴ��졣or���ڼž���              
		
		case 1:
			jdg = false;
		break;//���ڹ¶��� 
		
		case 2:
			if ( board[x][y] == 'O' ){
				jdg = true;
			}else
			{
				jdg = false;
			}
		break;//���ں�ƽ�� 
		
		case 3:
			jdg = true;
		break;//���ڷ��ܡ�
		
		default:
			jdg = false;
		break;//����ӵ���� 
	}
	
	count = 0;
	return jdg;
}
//��˵д�������������40���Ӱ����������������������������������� 

