#ifndef _zheng_he_
#define _zheng_he_

void shop (void);//�̵���� 
void see (void);//����ѡ�� 
void ai (void);//�����еĽ���֮���� 
void guess (void);//������Ϸ��
void primelist(void);//������ 
void(*pf[])(void) = {ai, guess, primelist, see, shop};

#endif
