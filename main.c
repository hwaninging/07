#include <stdio.h>
#include <stdlib.h>
//2. 지역 변수 생존기간 (tmep = 1이 반복 됨) 
int main(void)
{
    int i;
    
    for (i=0;i<5;i++)
    {
        int temp = 1;
        printf("temp = %d\n", temp);
        temp++; 
        }

  system("PAUSE");	
  return 0;
}
