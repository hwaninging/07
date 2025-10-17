#include <stdio.h>
#include <stdlib.h>
//4. 전역 변수
// # 50개 나오게 해보자  
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
} //여기 안에서만 int i; 작용  

void f(void)
{
     int i; //그래서 int i 하나 더 필요 
     for (i=0;i<10;i++)
     printf("#");
} 

