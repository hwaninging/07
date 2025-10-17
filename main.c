#include <stdio.h>
#include <stdlib.h>
//2. 지역 변수 생존기간 (tmep = 1이 반복 됨) 
// +1 더해진 채로 나오게 하려면? 
int main(void)
{
    int i;
    int temp = 1;
    
    for (i=0;i<5;i++)
    {
        printf("temp = %d\n", temp);
        temp++; //+1 증가되는 것이 아님. 
        }

  system("PAUSE");	
  return 0;
}
//새로 만들었다가 없어졌다가 반복해서 +1이 누적되지 않음.  
