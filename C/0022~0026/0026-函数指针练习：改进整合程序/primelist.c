#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isprime(int num);

void primelist(void){
	
	int aa,bb;
	
	printf("\n��Ҫ���ɶ��ٸ������ı�\n");
	scanf("%d",&aa);
    system("pause");
	 
	int *a; 
	
	bb=aa+1;
	
	a=(int*)malloc(bb*sizeof(int));//��̬�ڴ����������� 
	
	int i=2,k=0,situation=1,qwe;
	
	while ( situation <= aa ) {//����ǰ��for�ĳ���while! 

		k=i;
		qwe=isprime(k);
		
		if ( qwe == 1 ) {
			
			printf("�ҵ��ˣ�%d��������",i);
			a[situation] = i;
			
			if( i%3 == 0 ){
				printf("\n");
			}
			
			situation ++;
			} 
	i++;	
	}
	
	k = qwe = 0;//һ�����һ���k��qweû����֮��ͳ�ʼ����Ų�����ð�~ 
	
	printf("\n\n\n\n\n\n\n���������ˣ����ҿ첻�죿������O(��_��)O~\n\n");
    printf("���~���ڿ�ʼΪ������һ��������\n");
	
	system("pause");
	
	for ( k=1; k<=aa; k++ ){
	
	    if	( a[k] != 0 ) {
		
		    printf("%d\t",a[k]);
		
		    if ( k % 10 == 0 ){
			
			    printf("\n");
		
		}
		
		} else {
		
		printf("\n\n\n");
		break;
		              //�ڶ�ʧ����ʱֹͣ������˳�ѭ���������ڸĽ����û�����ˡ� 
		}
		
	} 
	
	printf("\nthanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	system("pause");
	
	free(a);//�н��л�~ 

}

int isprime(int num){

   int q,isprime=1;
   long int x=num;
   
      for( q=2;q<=sqrt(num);q++){
      long int x=num;
      x %= q;
      
         if( x==0 ){
         
         isprime=0;
         break;
         
         }
         // ����������ͷ��� isprime=1,����Ǻ����ͷ��� isprime=0. 
      }
   return (isprime);
}
