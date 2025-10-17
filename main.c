#include <stdio.h>
#include <stdlib.h>
//6-1. 연결 
int all_files; //전역 변수로 정의 되어있음. extern 

extern void sub(void); 

int main(int argc, char *argv[])
{
    sub();
    printf("%d\n", all_files);
    
    system("PAUSE");
    return 0;
}
