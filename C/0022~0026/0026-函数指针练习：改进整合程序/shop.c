#include <stdio.h>
#include <stdlib.h>

void shop (void){
	typedef struct{
		char name[50];
		char instruc[500];
		int price;
		int quant;
	}item;

    char choice;
    int i,j,m,n,o,a=0,b=0,c=1,last=0;
    //a��b��ѭ��ר�ã�c�������˳��ģ�last������������Ʒ�����ģ�i��43��44��꼻�һ��. 
    item num[1000]={'\0'};//1000����Ʒ��50�����ƣ�500�ֽ��ܣ��ռ���㡣

	system("color 4f");

    printf("��ӭ�����̵����ϵͳ��\n");
    printf("e:�˳�\t\tn:��������Ʒ\ns:����������Ʒ\tb:������Ʒ\na:����\n");

	while ( c == 1 ){

		printf("��Ҫ��ʲô��\n");

		scanf("\n%c",&choice);

		switch( choice ){
  	    	case 'e':

				c=2;
				choice='\0';

				break;
  	      	
			case 'n':
				
				last ++;//��һ��������Ʒʱ�ʹ������һ���ռ���~ 
    	        printf("����Ʒ ����:(��������������#)\n");

				for(a=0;a<500;a++){
     	       		scanf("%c",&(num[last].name[a]));
     		       	if (num[last].name[a] == '#'){
            			num[last].name[a] = '\0';
						break;
					}
				}

				printf("����Ʒ ���ܣ�(��������������@)\n(�������500�����ڣ���Ȼ����������)\n");

				for(a=0;a<500;a++){
        	    	scanf("%c",&(num[last].instruc[a]));
        	    	if (num[last].instruc[a] == '@'){
            			num[last].instruc[a] = '\0';
						break;
					}
				}

				printf("����Ʒ �۸�:");
				scanf("%d",&num[last].price);

				printf("\n֪���ˡ��ǵý���Ӵ~��~\n");
				
				
				choice='\0';
				
				break; 
	        
			case 's':
	        	
				printf("�õģ�������Ŀǰ�Ѿ��е���Ʒ��\n");

				for(a=0;a<last;a++){
	        		i=a+1;
	        		printf("%d����Ʒ���ƣ�",i);
	        		
					for(b=0;b<500;b++){
						if(num[i].name[b] == 0 &&num[i].name[b+1] == 0){
							break;
						}
	        			printf("%c",num[i].name[b]);
					}

					printf("\n���ܣ�");

					for(b=0;b<500;b++){
						if(num[i].instruc[b] == 0 &&num[i].instruc[b++] == 0){
							break;
						}
	        			printf("%c",num[i].instruc[b]);
					}
					
					printf("\n�۸�:%d",num[i].price);
					printf("\nʣ������:%d��",num[i].quant);

					printf("\n\n");
				}
				choice='\0';
				break;

    	    case 'b':
    	    	
				printf("������Ҫ�������Ʒ��ţ�\n");
				scanf("%d",&j);
				
				printf("��Ҫ�������Ʒ�ǣ�\n");
				
				for(a=0;a<500;a++){
					
					if( num[j].name[a] == 0 &&num[j].name[a+1] == 0 ){
						break;
					}
					printf("%c",num[j].name[a]);
				
				}
				
				printf("\n����һ���ܰ�����ƷŶ~\n�뿴���ҽ���~\n");
				
				for(a=0;a<500;a++){
					
					if( num[j].instruc[a] == 0 &&num[j].instruc[a+1] == 0 ){
						break;
					}
					printf("%c",num[j].instruc[a]);
				}
				
				printf("\nŶ~�Ķ������Ķ��˾͸Ͻ���ɣ�");
				printf("\n�۸�%d,\nʣ�ࣺ%d����\n",num[j].price,num[j].quant);
				
				printf("��Ҫ����ټ��أ�");
				
				scanf("%d",&m);
				
				if( m>num[j].quant ){
					printf("��Ǹ�أ���治��~\n");
				}else{
					printf("�õģ�һ����%dԪ~��Ʒ���۳�~",num[j].price*m);
					
					num[j].price -= m;
					
					printf("\n��ʣ%d��Ŷ��\n",num[j].price);
				} 

     	   		choice='\0';
     	   		break;
    	    
			case 'a':
    	    	
    	    	printf("��������Ʒ���~\n");
				scanf("%d",&n);
				
				printf("��Ҫ��������Ʒ�ǣ�\n");
				
				for(a=0;a<500;a++){
					
					if( num[n].name[a] == 0 &&num[n].name[a+1] == 0 ){
						break;
					}
					printf("%c",num[n].name[a]);
				
				}
				
				printf("\n�������ټ��أ�\n");
				scanf("%d",&o);
				
				num[n].quant += o;
				
				printf("�������~\n");

    	    	choice='\0';
    	    	break;
    	    
			default:
    	    	system("cls");
				printf("\n������~��������Ŷ?\n");
    	    	choice='\0';
    	    	
				getchar();
				break;
		}

	}
	
	printf("ллʹ�á�\n");
	printf ("thanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n\n");
}

