#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int judge( int heng,int zong ); //��������������������о��裬������ֻ�ǿ�ܡ� 

int cishu=1; //��Щ���������Ƿź�����ģ�����Ϊ���ܹ�һֱ���þ�Ūȫ�ֱ����ˡ� 
int result = -1; //-1:û��Ӯ, 0 : oӮ, 1 : xӮ��2�����֡� 
const int size=3;//���̵Ĵ�С 
char board[size][size]={
	{'-','-','-'},
	{'-','-','-'},
	{'-','-','-'},
	}; 

int main(void) {
	
	printf ("��ӭʹ�ñ���д�ľ����塣\n\n");
	printf ("-\t-\t-\n\n\n-\t-\t-\n\n\n-\t-\t-\n\n\n");
	
	int heng = 0,zong = 0,guichu=0;
	int hege=1;//ֻ�����Ϊ0ʱ�Ž�����Ž����ꡣ

	printf("���������������ꡣ��ʽ��\n\n�������꡿,�������꡿\n\n�������Ǵ������ң��������Ǵ������¡�\n\nע�ⶺ�Ų�Ҫ�����Ŷ\n\n\n\n"); 
	
		while ( hege == 1 ) {
			
			printf("\n��������������~\n"); 
			scanf ("%d,%d",&heng,&zong);
		
			if ( heng > 3 || zong > 3 ) {
				printf ("\n\n�����������岻��ֻ��������~������Ŷ~\n\n"); 
				continue;
			}	else if ( heng < 1 || zong < 1 ){
				printf ("\n\n���У�������ѧ�ۣ�������������~\n\n");
				continue;
			}	else {
				hege = 0;//�ж�����ϸ� 
			}
			
			result = judge(zong ,heng);	
			
			switch ( result ) {	
					
				case -1:
					zong = heng = 0;
					hege =1;
					break;
		
				case 0:
					printf("\t");
					for( guichu = 0 ; guichu < 80 ; guichu ++ ){
						printf ("��ϲ!!\n��ϲ O �����ʤ�������� ��Ϸ����~");
						if ( guichu%10 == 0 ){
							printf("\n");
						}
					}
					break;
				case 1:
					printf("\t"); 
					for( guichu = 0 ; guichu < 80 ; guichu ++ ){
						printf ("��ϲ!!\n��ϲ X �����ʤ�������� ��Ϸ����~");
						if ( guichu%10 == 0 ){
							printf("\n");
						}
					}
					break;
				case 2:
					printf("\t\n");
					printf("���֡������������ƾ����а���^^\n");
					break;
				defult :
					printf("��Ǹ�أ�ò�Ƴ���һ��С����~");//�����ֹ�����Զ�޷�����������Է���һ�����������֡��� 
					break;
		}
	}
	
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	
	system("pause");
	
	return 0;
}

int judge ( int heng , int zong ) {
	
	heng --; zong --;
	
	if ( board[heng][zong] == 'O' || board[heng][zong] == 'X' ){
		
		printf("\n��������һ���Ѿ���ռ����~���������~\n");
		return (-1);
	} 
	
	if ( cishu % 2 == 1 ){
		board[heng][zong] = 'O';
	}	else {
		board[heng][zong] = 'X';
	}

	int i,j; //i���У�j���С�

	printf ("\n\n\n\n\n\n\n\n");
	for ( i=0; i<size ;i++ ) {
		for( j=0; j<size ;j++ ){
			printf("%c\t", board[i][j]);
		}
		printf("\n\n\n");
	}
	//������֮��Ϳ�ʼ�˳������ӵ��ж�ʤ������~~
	
	//������
	for ( j=0; j<size; j++ ) {

		if ( board[0][j] == board[1][j] && board[1][j] == board[2][j] ){

			//������ʱʤ���Ѷ���ֻ���ж�ʤ����˭�� 
			
			if ( board[1][j] == 'O' ) {
				result = 0;
			} else if ( board[1][j] == 'X' ) {
				result = 1;
			}	//����˵����϶���board[0][j] == 'X'�����~ 
		}
	}
	
	//�п��� 
	for ( i=0; i<size; i++ ) {
		
		if ( board[i][0] == board[i][1] && board[i][1] == board[i][2] ){
			
		//������ʱʤ���Ѷ���ֻ���ж�ʤ����˭��
			
			if ( board[i][1] == 'O' ) {
				result = 0;
			} else if ( board[j][1] == 'X' ) {
				result = 1;
			}	//����˵����϶���board[i][0] == X�����~ 
		}
	}
	
	//������б�ŵ��жϡ�
	if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] ){		

		//������ʱʤ���Ѷ���ֻ���ж�ʤ����˭��
	
		if ( board[0][0] == 'O' ) {
			result = 0;
		} else if ( board[0][0] == 'X' ) {
			result = 1;
		}	//����˵����϶���board[i][0] == X�����~ 
	}
	
	if ( board[2][0] == board[1][1] && board[1][1] == board[0][2] ){
		
		//������ʱʤ���Ѷ���ֻ���ж�ʤ����˭��
		
		if ( board[1][1] == 'O' ) {
			result = 0;
		} else if ( board[1][1] == 'X' ) {
			result = 1;
		}	//����˵����϶���board[i][0] == X�����~ 	
	}
	
	switch ( board[heng][zong] ) {
		case 'O':
			printf("\n������ X ����~\n");
			break;
		case 'X':
			printf("\n������ O ����~\n");
			break;
		defult  :
			break;
	}

//�ر�˵����������if��������ʱ�����ǻ�û���¡����̿ճ������������ʱresult���ǵ���-1. 
	
	cishu ++ ;
	
	if ( cishu == 10 ) {
		printf("\n���һ���أ������Ե�һ�̣�\n");
		if ( result == -1 ){
		result = 2 ;
		}
	}
	
	return (result);
}

