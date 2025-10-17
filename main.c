#include <stdio.h>
#include <stdlib.h>
//1. 변수 범위 (컴파일 여부 확인) 
int main(int argc, char *argv[])
{
  int flag=1;
  int y; //변수 선언 
  
  while (flag != 0)
  {
        int y;
        y = 3;
        flag = 0;
  }
  y = 4; //y가 선언이 안 된 상태였다  


  system("PAUSE");	
  return 0;
}
