//HealthSystem.h By SD
//Corrected by ice1000
#include <conio.h>
#include <unistd.h>
#include <string.h>
#include <iostream>

void p(int x);
void m(int x);
void Info(void);

int health =20;
int hunger = 0;

/*
int i;
for(i = 0; i < 50; i++ ){
	info[i] = '\0';
}
*/

using namespace std;

int main(void){
	
	int i;

    char info[50];
    for(i = 0; i < 50; i++ ){
		info[i] = '\0';
	}
//��ʼ���ַ�������info 
    if((health == 20)&&(hunger == 0)){
    	for(i = 0;i < 20; i++){
    		hunger --;
			sleep(30);
        	hunger --;
			sleep(30);
			health --;
    	}
//ʵ��û�㶮�����˼������hunger--��40�Ρ�health--��20�Ρ� 
        if(health == 0){
        	strcat(info,"Dead");
        	puts(info);
        }
    }
//���if��ȫû���κ����壬�����һ��Ǹ��㱣���ˡ� 
    for(hunger = 0;hunger < 20;hunger++){
     	sleep(120);
    }
//���forҲû���κ����壬�����Ҹ�������֮�����ٿ���ִ���ˡ� 
}
//��ÿ��sleep��ʱ����ĺܳ���ȷ��Ҫ��ô���� 
void lastm(int x){
	int i;
    for(i = health; i < 200; i++ ){
        health --;
        sleep(x);
    }
}
//�������������������Ҹ��㼸����ȫɾ�����´�ġ� 
void lastp(int x){
	int i;
    for(i = health; i > -1; i-- ){
    	health ++;
        sleep(x);
    }
}
//��δ�������дѭ���ģ����� 
void p(int x){
    health += x;
}
//��������Ҳû���κ����塣 
void m(int x){
    health -= x;
}
//������������ǲ۵����ģ�Ҳ���Ҹ���ȫɾ�����´�ġ� 
//��ȫ������switch�������SB�������� 
//д��ô��if��˭������������ 

//switch(hunger){
//	case 0:
//		strcpy(info,"Extremly Hungry");
//		break;
//	case 20:
//		strcpy(info,"Full");
//		break;
//	case 1:case 2:case 3:case 4:case 5:
//		strcpy(info,"Almost Full");
//		break;
//	case 6:case 7:case 8:case 9:case 10:
//		strcpy(info,"Fine");
//		break;
//	case 11:case 12:case 13:case 14:case 15:
//		strcpy(info,"Well");
//		break;
//	default:
//		strcpy(info,"Hungry");
//		break;
//}
Info(char* info){
	int i;
	for(i = 0; i < 50; i++ ){
		info[i] = '\0';
	}
    if(hunger == 20){
    	strcpy(info,"Extremly Hungry");
   	}
   	if(hunger == 0){
   		strcpy(info,"Full");
   	}
   	if((hunger < 20)&&(hunger > 15)){
   		strcpy(info,"Hungry");
   	}
   	if((hunger <= 15)&&(hunger > 10)){
       	strcpy(info,"Well");
    }
   	if((hunger <= 10)&&(hunger > 5)){
       	strcpy(info,"Fine");
   	}
   	if((hunger <= 5)&&(hunger > 0)){
       	strcpy(info,"Almost Full");
   	}
}
