#include <stdio.h>
#include <stdlib.h>
#define lines 38  //�ļ����������� 

int main(void){
	FILE *fp = fopen( "C:\\Users\\asus1\\Desktop\\The C Programming Language\\0022~0026���ϰ�\\0025-�ļ�������ϰ��red���\\�����ļ�\\a.in","r" );//��ֻ����
	FILE *ffp= fopen( "C:\\Users\\asus1\\Desktop\\The C Programming Language\\\����\\��Դ\\�ļ���������\\����\\b.txt","r" );
	if( fp&&ffp ){
		char i='\0';
		
		puts("�ļ��ѳɹ��򿪡�O(��_��)O����~\n"); 
		puts("��a��ʾ�ļ�����~");
		scanf("%c",&i);
		switch( i ){
			case 'h'://���ش��� 
			case 'H':
				char text[60000];//���ա�
				system("color e3");
				int a,b;
				fgets( text, 60000, ffp );
				for( a=0; a<59999; a+=600){
					for( b=0; b<600; b++){
						printf("%c",text[a+b]);
					}
				printf("\n\n");
				system("pause");
				printf("\n");
				}
				break;
			case 'a':
			default:
				fgets( text, 2000, fp );//��һ�����ַ���ָ�룬�ڶ�����������������������ļ�ָ�롣
				printf( "%s\n", text );
			break;
		}
		fclose(ffp);
		fclose(fp);
	}else{
		puts("�޷���ָ���ļ���\n");
	}
	
	
	printf("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	return 0;
 } 
