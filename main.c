#include <stdio.h>
#include <stdlib.h>
//4. ���� ���� (�ƹ����� �� �� ���� - �� ������ ��ü �����̴�.) 
int counter; //�ʱ�ȭ �ϴ� �� �⺻������ 0 -> int counter = 10; �ϸ� 10���� ���� 

void set_counter()
{
     counter = 20;
}
int main(void)
{
    printf("counter=%d\n", counter);
    set_counter();
    printf("counter=%d\n", counter);
    
    system("PAUSE");	
    return 0;
} 

