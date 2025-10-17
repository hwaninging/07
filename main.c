#include <stdio.h>
#include <stdlib.h>
//4. 전역 변수 (아무데나 쓸 수 있음 - 이 파일의 전체 범위이다.) 
int counter; //초기화 하는 애 기본적으로 0 -> int counter = 10; 하면 10부터 시작 

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

