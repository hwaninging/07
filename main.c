#include <stdio.h>
#include <stdlib.h>
//3. 매개변수  
int inc(int counter);

int main(void)
{
    int i = 10;
    
    printf("함수 호출 전 i=%d\n", i); //i값 출력 
    i = inc(i); //반환값을 넣어줘야함. 
    printf("함수 호출 후 i=%d\n", i); // 함수 호출 후 i값 출력 
    
    system("PAUSE");	
    return 0;
} 

int inc(int counter) //매개면수로 카운더 변수 받음 
{
    counter++; //+1 해줌 
    return counter; //반환 
} //지역 변수 : 이 함수가 없어짐과 동시에 같이 사라짐. 따라서 기존 10이 그대로 나옴. 
