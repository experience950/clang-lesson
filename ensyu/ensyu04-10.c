#include <stdio.h>

int main(void)
{
  int num, i;

  printf("正の整数：");
  scanf("%d", &num);

  i = 1;
  while (i <= num) {
    puts("*");
    ++i;
  }
  
  return 0;
}
