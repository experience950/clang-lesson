/*
  p.67 演習
  List3-4 (p.45)
  List3.17(p.61)
*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください：");
  scanf("%d", &no);

  switch (no % 2) {
  case 0  : puts("その数は偶数です。"); break;
  default : puts("その数は奇数です。"); break;
  }

  return 0;
}
