#include <stdio.h>
#include <stdlib.h>
//6-1. ���� 
int all_files; //���� ������ ���� �Ǿ�����. extern 

extern void sub(void); 

int main(int argc, char *argv[])
{
    sub();
    printf("%d\n", all_files);
    
    system("PAUSE");
    return 0;
}
