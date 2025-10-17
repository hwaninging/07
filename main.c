#include <stdio.h>
#include <stdlib.h>
//4. 전역 변수 (아무데나 쓸 수 있음 - 이 파일의 전체 범위이다.) 
void f(void);

int i;
int main(void)
{
    for (i=0;i<5;i++)
    {
        f();
    }
    system("PAUSE");	
    return 0;
}

void f(void)
{
     for (i=0;i<10;i++) //#이 10개 찍힘. 
     printf("#");
} 

