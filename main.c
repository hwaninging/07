#include <stdio.h>
#include <stdlib.h>
//4. ���� ����
// # 50�� ������ �غ���  
void f(void);

int main(void)
{
    int i; 
    for (i=0;i<5;i++)
    {
        f();
    }
    system("PAUSE");	
    return 0;
} //���� �ȿ����� int i; �ۿ�  

void f(void)
{
     int i; //�׷��� int i �ϳ� �� �ʿ� 
     for (i=0;i<10;i++)
     printf("#");
} 

