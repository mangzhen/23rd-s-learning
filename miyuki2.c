#include<stdio.h>

int main()
{
  //接下来是continue
  //其作用为，结束本次循环，继续下次的循环
  for(int i = 1;i <= 6;i++)
  {
    if(i == 3)
    {
      continue;
    }
    printf("正在吃第%d个馒头\n",i);

  }
  /*
  continue实质是剩下的不干了，直接收尾，对于while和do...while
  是跳回条件判断，对于for而言，到第三格，如i++,然后再判断
  正因为for第三个写了更新，所以不会产生死循环
  比如我写的这个程序，如果我硬是用while来写，它最终只会输出到吃的第一个和第二个馒头，后面直接卡死


  */




  return 0;
}
