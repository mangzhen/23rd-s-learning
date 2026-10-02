#include<stdio.h>

int main()
{
  //跳转控制语句 break continue
  //break用在switch或循环中，即结束，跳出
  int num1 = 0;
  while(1)
  {
    num1++;
    if(num1 % 3 == 0 && num1 % 5 == 0)
    {
      printf("满足条件的是%d\n",num1);
      break;//找到第一个后就停了
    }
  }
  printf("让你找到了！是%d\n",num1);
  //顺便一提，问题中没有限定你找这个数的范围，比如1~100,如果有这个范围，那就得用for了



  return 0;
}
