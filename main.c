#include <stdio.h>
#include <stdlib.h>
//5. ���� ���� ������ (���� �Ⱓ�� �ø��� �ʹ�)
// static�� ������ ��� ��Ƴ���
void sub(void);

int main(void)
{
    int i; 
    for (i=0;i<3;i++)
        sub(); // sub �Լ� 3�� ����
         
    system("PAUSE");	
    return 0;
} 

void sub(void)
{
     int auto_count = 0; //�ڵ� �Ҵ�  
     static int static_count = 0; //2���� ���� ���� (auto, static) //���� �Ҵ�  
     
     auto_count++;
     static_count++; //���� ������. 
     
     printf("auto_count=%d\n", auto_count);
     printf("static_count=%d\n", static_count);
}
//static count�� +1 ����, auto count �� 1�� ����  
