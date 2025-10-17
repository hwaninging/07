#include <stdio.h>
#include <stdlib.h>
//5. 저장 유형 지정자 (생존 기간을 늘리고 싶다)
// static을 붙히면 계속 살아남음
void sub(void);

int main(void)
{
    int i; 
    for (i=0;i<3;i++)
        sub(); // sub 함수 3번 실행
         
    system("PAUSE");	
    return 0;
} 

void sub(void)
{
     int auto_count = 0; //자동 할당  
     static int static_count = 0; //2가지 변수 선언 (auto, static) //정적 할당  
     
     auto_count++;
     static_count++; //값이 누적됨. 
     
     printf("auto_count=%d\n", auto_count);
     printf("static_count=%d\n", static_count);
}
//static count는 +1 증가, auto count 는 1로 유지  
