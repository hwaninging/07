#include <stdio.h>
#include <stdlib.h>
//3. �Ű�����  
int inc(int counter);

int main(void)
{
    int i = 10;
    
    printf("�Լ� ȣ�� �� i=%d\n", i); //i�� ��� 
    i = inc(i); //��ȯ���� �־������. 
    printf("�Լ� ȣ�� �� i=%d\n", i); // �Լ� ȣ�� �� i�� ��� 
    
    system("PAUSE");	
    return 0;
} 

int inc(int counter) //�Ű������ ī��� ���� ���� 
{
    counter++; //+1 ���� 
    return counter; //��ȯ 
} //���� ���� : �� �Լ��� �������� ���ÿ� ���� �����. ���� ���� 10�� �״�� ����. 
