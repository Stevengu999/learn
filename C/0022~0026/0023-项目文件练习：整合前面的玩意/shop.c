#include <stdio.h>
#include <stdlib.h>

void shop(void){
    char choice;
    int i,j,m,n,o,a=0,b=0,c=1,last=0;
    //a��b��ѭ��ר�ã�c�������˳��ģ�last������������Ʒ�����ģ�i��43��44��꼻�һ��.
	static char instruction[1001][2][500]={'\0'};//1000����Ʒ��500�����ƣ�500�ֽ��ܣ��ռ���㡣
    static int pricequantity[1001][2]={'\0'};//1000����Ʒ��������Ǽۣ���һ����ʣ������
 

	system("color 4f");

    printf("��ӭ�����̵����ϵͳ��\n");
    printf("e:�˳�\t\tn:��������Ʒ\ns:����������Ʒ\tb:������Ʒ\na:����\np:�ٿ�һ��(��ؼ�ס�������������ָ�)\n");

	while ( c == 1 ){

		printf("��Ҫ��ʲô��\n");

		scanf("\n%c",&choice);

		switch( choice ){
			
			case 'p':
				printf("e:�˳�\t\tn:��������Ʒ\ns:����������Ʒ\tb:������Ʒ\na:����\np:�ٿ�һ��(��ؼ�ס�������������ָ�)\n");
				break;
			
  	    	case 'e':

				c=2;
				choice='\0';

				break;
  	      	
			case 'n':
				
				last ++;//��һ��������Ʒʱ�ʹ������һ���ռ���~ 
    	        printf("����Ʒ ����:(��������������#)\n");

				for(a=0;a<500;a++){
     	       		scanf("%c",&instruction[last][0][a]);
     		       	if (instruction[last][0][a] == '#'){
            			instruction[last][0][a] = '\0';
						break;
					}
				}

				printf("����Ʒ ���ܣ�(��������������@)\n(�������500�����ڣ���Ȼ����������)\n");

				for(a=0;a<500;a++){
        	    	scanf("%c",&instruction[last][1][a]);
        	    	if (instruction[last][1][a] == '@'){
            			instruction[last][1][a] = '\0';
						break;
					}
				}

				printf("����Ʒ �۸�:");
				scanf("%d",&pricequantity[last][0]);

				printf("\n֪���ˡ��ǵý���Ӵ~��~\n");
				
				
				choice='\0';
				
				break; 
	        
			case 's':
	        	
				printf("�õģ�������Ŀǰ�Ѿ��е���Ʒ��\n");

				for(a=0;a<last;a++){
	        		i=a+1;
	        		printf("%d����Ʒ���ƣ�",i);
	        		
					for(b=0;b<500;b++){
						if(instruction[i][0][b] == 0 &&instruction[i][0][b++] == 0){
							break;
						}
	        			printf("%c",instruction[i][0][b]);
					}

					printf("\n���ܣ�");

					for(b=0;b<500;b++){
						if(instruction[i][1][b] == 0 &&instruction[i][1][b++] == 0){
							break;
						}
	        			printf("%c",instruction[i][1][b]);
					}
					
					printf("\n�۸�:%d",pricequantity[i][0]);
					printf("\nʣ������:%d��",pricequantity[i][1]);

					printf("\n\n");
				}
				choice='\0';
				break;

    	    case 'b':
    	    	
				printf("������Ҫ�������Ʒ��ţ�\n");
				scanf("%d",&j);
				
				printf("��Ҫ�������Ʒ�ǣ�");
				
				for(a=0;a<500;a++){
					
					if( instruction[j][0][a] == 0 &&instruction[j][0][a++] == 0 ){
						break;
					}
					printf("%c",instruction[j][0][a]);
				
				}
				
				printf("\n����һ���ܰ�����ƷŶ~\n�뿴���ҽ���~\n");
				
				for(a=0;a<500;a++){
					
					if( instruction[j][1][a] == 0 &&instruction[j][1][a++] == 0 ){
						break;
					}
					printf("%c",instruction[j][1][a]);
				}
				
				printf("\nŶ~�Ķ������Ķ��˾͸Ͻ���ɣ�");
				printf("\n�۸�%d,\nʣ�ࣺ%d����\n",pricequantity[j][0],pricequantity[j][1]);
				
				printf("��Ҫ����ټ��أ�");
				
				scanf("%d",&m);
				
				if( m>pricequantity[j][1] ){
					printf("��Ǹ�أ���治��~\n");
				}else{
					printf("�õģ�һ����%dԪ~��Ʒ���۳�~",pricequantity[j][0]*m);
					
					pricequantity[j][1] -= m;
					
					printf("\n��ʣ%d��Ŷ��\n",pricequantity[j][1]);
				} 

     	   		choice='\0';
     	   		break;
    	    
			case 'a':
    	    	
    	    	printf("��������Ʒ���~\n");
				scanf("%d",&n);
				
				printf("��Ҫ��������Ʒ�ǣ�");
				
				for(a=0;a<500;a++){
					
					if( instruction[n][0][a] == 0 &&instruction[n][0][a++] == 0 ){
						break;
					}
					printf("%c",instruction[n][0][a]);
				
				}
				
				printf("�������ټ��أ�\n");
				scanf("%d",&o);
				
				pricequantity[n][1] += o;
				
				printf("�������~\n");

    	    	choice='\0';
    	    	break;
    	    
			default:
    	    	
				printf("\n������~��������Ŷ?\n");
    	    	choice='\0';
    	    	
				getchar();
				break;
		}

	}
	
	printf("ллʹ�á�\n");
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
	
	puts("Ŷ��������ˣ��ð�~\n�̵�ϵͳ��ӭ�����´�ʹ��~\n");
	
	system("pause");
}

